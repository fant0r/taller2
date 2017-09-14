/*programa que pide al usuario las filas y las columnas de una matriz para rellenar
y posteriormente muestra la matriz en pantalla
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funcion principal
int main () {
	
//peticion al usuario para que ingrese datos
int filas;
int columnas;
int valor;

printf("por favor ingrese el numero de filas \n");	
scanf("%d", &filas);
printf("por favor ingrese el numero de columnas \n");	
scanf("%d", &columnas);

//definicion de matriz
int matriz [filas] [columnas];

//ingreso de datos de matriz
for (int f=0; f<filas; f++){
	for(int c=0; c<columnas; c++){
		printf("ingrese el numero para la matriz fila '%d' columna '%d' \n", f, c);
		scanf("%d", &valor);
		matriz [f] [c] = valor;	
	}
}
printf("\n");

//impresion de matriz
for (int f=0; f<filas; f++){
	for(int c=0; c<columnas; c++){
		printf("%d ", matriz [f] [c]);
	}
	printf("\n");
}
getch();	
return 0;
}

