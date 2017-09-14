/*este programa muestra la suma de los numeros que ingrese el usuario
fecha:08 dept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de variables
	int num;
	int suma=0;
	//proceso
	do{
		printf("por favor ingrese un numero \n");
		scanf("%d", &num);
		suma=suma+num;
	
	}
	while((num>0&&num<20)||num>30);
	//salida
	printf("\n");
	printf("la suma de los valores entregados es %d \n", suma);
	getch();
	return 0;
}
