#include<iostream>
using namespace std;

void esctablero(int tablero[3][3],int x,int y,int fpelota,int cpelota);
 
main ()
{
	int tablero[3][3];
    int fpelota,cpelota, y, x, ingreso;
    bool game_over;
    fpelota=2;
    cpelota=1;
	
	game_over=false;
	
    for (x=0;x<3;x++){
    	for (y=0;y<3;y++){        //da valores iniciales del tablero
        	if (x==0){
            tablero[x][y]=1;
        	}else{
            tablero[x][y]=0; //espacio vacio
        	}
        	if(x==fpelota and y==cpelota){
            tablero[fpelota][cpelota]=9;
        	}
    	} 
	}
	
	do{
		cout<<"Ingrese a donde desea moverse"<<endl;
		cout<<"1 - Moverse hacia la izquierda"<<endl;
		cout<<"2 - Moverse hacia el centro"<<endl;
		cout<<"3 - Moverse hacia la derecha"<<endl;
		cin>>ingreso;
		fpelota=2;
    	cpelota=1;
    	tablero[fpelota][cpelota]= tablero[fpelota][cpelota]=9;

    	esctablero (tablero, x, y, fpelota, cpelota);
		
		
		switch(ingreso){
			
			
			
			case 1:
				fpelota=2;
    			cpelota=1;
				do{

					tablero[fpelota][cpelota]=0;
					if (fpelota!=0){
						fpelota=fpelota-1;
					}
        			if (cpelota!=0){
        			cpelota=cpelota-1;
					}
        		
        	    	if (tablero[fpelota][cpelota]==0){
        			tablero[fpelota][cpelota]=9;
        			esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
        			}
					if(tablero[fpelota][cpelota]==1 ){
            		tablero[fpelota][cpelota]= tablero[fpelota][cpelota]=9;
            		esctablero (tablero, x, y, fpelota, cpelota);
            		}

				}while (fpelota!=0);
				tablero[fpelota][cpelota]=0;

				break;

			
			case 2:
				fpelota=2;
    			cpelota=1;
    			
				    do{

					tablero[fpelota][cpelota]=0;
					if (fpelota!=0){
						fpelota=fpelota-1;
					}
        		
        	    	if (tablero[fpelota][cpelota]==0){
        			tablero[fpelota][cpelota]=9;
        			esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
        			}
					if(tablero[fpelota][cpelota]==1 ){
            		tablero[fpelota][cpelota]= tablero[fpelota][cpelota]=9;
            		esctablero (tablero, x, y, fpelota, cpelota);
            		}

					}while (fpelota!=0);
					tablero[fpelota][cpelota]=0;
					break;
			
			case 3:
				fpelota=2;
    			cpelota=1;
				do{

					tablero[fpelota][cpelota]=0;
					if (fpelota!=0){
						fpelota=fpelota-1;
					}
        			if (cpelota!=2){
        			cpelota=cpelota+1;
					}
        		
        	    	if (tablero[fpelota][cpelota]==0){
        			tablero[fpelota][cpelota]=9;
        			esctablero(tablero, x, y, fpelota, cpelota);//escribir tablero
        			}
					if(tablero[fpelota][cpelota]==1 ){
            		tablero[fpelota][cpelota]= tablero[fpelota][cpelota]=9;
            		esctablero (tablero, x, y, fpelota, cpelota);
            		}

				}while (fpelota!=0);
				tablero[fpelota][cpelota]=0;

				break;
		}
	}while(game_over==false);
	
}
	


void esctablero(int tablero[3][3],int x,int y,int fpelota,int cpelota){
    for (x=0;x<3;x++){
            for (y=0;y<3;y++){
                cout<<tablero[x][y];       //escribir tablero
            }
        cout<<endl;
    }
    system("pause");
    system("cls");
}
