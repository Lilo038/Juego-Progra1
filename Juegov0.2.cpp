#include<iostream>
#include<string>
using namespace std;
void direccion1(int tablero[5][7],int x,int y,int fpelota,int cpelota);//izquierda arriba 
void direccion2(int tablero[5][7],int x,int y,int fpelota,int cpelota);//arriba
void direccion3(int tablero[5][7],int x,int y,int fpelota,int cpelota);//derecha arriba
void direccion4(int tablero[5][7],int x,int y,int fpelota,int cpelota);//izquierda abajo
void direccion5(int tablero[5][7],int x,int y,int fpelota,int cpelota);//abajo
void direccion6(int tablero[5][7],int x,int y,int fpelota,int cpelota);//derecha abajo
void esctablero(int tablero[5][7],int x,int y,int fpelota,int cpelota);//escribir tablero
//void esctablero(int tablero[5][7],int x,int y,int fpelota,int cpelota);//escribir tablero
main(){
	int tablero[5][7];
	int fpelota,cpelota, y, x, ingreso;
	fpelota=4;
	cpelota=3;
	
	for (x=0;x<5;x++){
	for (y=0;y<7;y++){        //da valores iniciales del tablero
		if (x==0){
			tablero[x][y]=1;
		}else if (x==1){
			tablero[x][y]=2;
		}else{
			tablero[x][y]=0; //espacio vacio
		}
		if(x==fpelota and y==cpelota){
			tablero[fpelota][cpelota]=9;
		}
	} 
}
	
	
	
	
	
	do{
		do{	
			cout<<"Ingresa:"<<endl;
			cout<<"1- para mover a la izquierda."<<endl;
			cout<<"2-para mover al centro."<<endl;
			cout<<"3-para mover a la derecha."<<endl;
			cin>>ingreso;
		}while(ingreso>3 or ingreso<1);
		switch (ingreso){
			case 1: 
				direccion1(tablero,x,y,fpelota, cpelota);//movimineto de la pelota izquierda arriba
				esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
				if (cpelota==0){
					ingreso=3;
				}  
				if (fpelota==0 or tablero[fpelota][cpelota]!=3){
					ingreso=4;
				}
			case 2:
			    direccion2( tablero, x, y, fpelota, cpelota);//movimineto de la pelota recto
				esctablero( tablero, x, y, fpelota, cpelota);//escribir tablero
				if (fpelota==0 or tablero[fpelota][cpelota]!=3){
					ingreso=5;
				}
			case 3:
				direccion3( tablero, x, y, fpelota, cpelota);//movimineto de la pelota derecha arriba
				esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
				if (cpelota==6){
					ingreso=1;
				}
					if (fpelota==0 or tablero[fpelota][cpelota]!=3){
					ingreso=6;
				}
			case 4:
				direccion4( tablero, x, y, fpelota, cpelota);//movimineto de la pelota izquierda abajo
				esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
				if (cpelota==0){
					ingreso=6;
				} 
			case 5:
				direccion5( tablero, x, y, fpelota, cpelota);//movimineto de la pelota abajo
				esctablero( tablero, x, y, fpelota, cpelota);//escribir tablero
			case 6:
				direccion6( tablero, x, y, fpelota, cpelota);//movimineto de la pelota derecha abajo
				esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
				if (cpelota==6){
					ingreso=4;
				} 
		}
	}while(fpelota<4);                                    //< >
}

void direccion1(int tablero[5][7],int x,int y,int fpelota,int cpelota){
	do{
		fpelota--;
		cpelota--;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
void direccion2(int tablero[5][7],int x,int y,int fpelota,int cpelota){
		do{
		fpelota--;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
	void direccion3(int tablero[5][7],int x,int y,int fpelota,int cpelota){
		do{
		fpelota--;
		cpelota++;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
void direccion4(int tablero[5][7],int x,int y,int fpelota,int cpelota){
	do{
		fpelota++;
		cpelota--;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
void direccion5(int tablero[5][7],int x,int y,int fpelota,int cpelota){
	do{
		fpelota++;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
void direccion6(int tablero[5][7],int x,int y,int fpelota,int cpelota){
	do{
		fpelota++;
		cpelota++;
		if (tablero[fpelota][cpelota]==3){
		//escribir tablero
		}else if(tablero[fpelota][cpelota]==1 or tablero[fpelota][cpelota]==2 ){
			tablero[fpelota][cpelota]--;
		}
	}while(tablero[fpelota][cpelota]==3 or cpelota>0 or cpelota<7);
}
void esctablero(int tablero[5][7],int x,int y,int fpelota,int cpelota){
	for (x=0;x<5;x++){
			for (y=0;y<7;y++){
					cout<<tablero[x][y];       //escribir tablero
		
			}
		cout<<endl;
	}              
} 
