/*este programa muestra la diagonal de una matriz
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//declaracion de variable
int num=1;
//funcion principal
int main(){
//declaracion de matriz
	int matriz [3][3];
	//introduccion de datos
	for (int f=0; f<3; f++){
		for(int c=0; c<3; c++){
		matriz[f][c]=num;
		num+=1;
		}
	}
	//impresion de matriz
	printf("impresion de matriz\n");
	for (int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			printf("%d", matriz[f][c]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	
	//impresion de diagonal de matriz
	printf("impresion de la diagonal de la matriz\n");
	for (int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			if(f==c){
				printf ("%d", matriz[f][c]);	
			}
			
		}
	
	}
	
	getch();
	return 0;
}
