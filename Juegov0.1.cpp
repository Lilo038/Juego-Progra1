#include<iostream>
#include<string>
using namespace std;

main(){
	int tablero[5][7];
	int fpelota,cpelota, y, x;


	fpelota=5;
	cpelota=4;
	for (x=0;x<5;x++){
		for (y=0;y<7;y++){
			if (x==0){
				tablero[x][y]=1;
			}else if (x==1){
				tablero[x][y]=2;
			}else{
				tablero[x][y]=3;
			}
			if(x==fpelota and y==cpelota){
				tablero[x][y]=tablero[fpelota][cpelota];
				tablero[fpelota][cpelota]=0;
			} 
		}
	}
	
	for (x=0;x<5;x++){
		for (y=0;y<7;y++){
			if (tablero[x][y]!=3){
				cout<<tablero[x][y];
			}
			if (tablero[x][y]==3){
				cout<<" ";
			}
			if (tablero[x][y]==0){
				cout<<tablero[fpelota][cpelota];
			}
		}
		cout<<endl;
	}
}
