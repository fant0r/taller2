/*este programa le pide al usuario que ingrese la cantidad de filas y columnas de la matriz 
y copia la matriz en otra matriz
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//declaracion de variable
int filas;
int columnas;
int valor;

//funcion principal
int main(){
	
	//aqui se le pide al usuario que ingrese la cantidad de filas y columnas
	printf("por favor ingrese el numero de filas\n");
	scanf("%d", &filas);
	printf("por favor ingrese el numero de columnas\n");
	scanf("%d", &columnas);
	
	
	//declaracion de matriz
	int matriz [filas][columnas];
	int matriz2 [filas][columnas];
	//introduccion de datos
	for (int f=0; f<filas; f++){
		for(int c=0; c<columnas; c++){
			printf("ingrese un valor en la fila '%d' columna '%d'\n", f, c);
			scanf("%d", &valor);
			matriz[f][c]=valor;
		}
	}
	//aqui se copia la matriz en otra matriz
	
	for (int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			matriz2 [f][c]=matriz [f][c];
		}
	}
	
	
	//impresion de matriz2
	printf("impresion de matriz2\n");
	for (int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			printf("%d", matriz2[f][c]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
