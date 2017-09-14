
/*programa: este programa calcula la cantidad de dolares que tiene una persona
fecha: 03 septiembre 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main(){
	//declaracion de vasriables
	float precio_dollar;
	float cantidad_dolares;
	float calculo;
	
	//aqui se pide al usuario ingresar los datos
	printf("ingrese el precio actual del dollar  \n");
	scanf("%f", &precio_dollar);
	printf("ingrese la cantidad de dolares que tiene\n");
	scanf("%f", &cantidad_dolares);
	
	//calculo
	calculo = precio_dollar*cantidad_dolares;
	
	//salida en pantalla
	printf("total de dinero en dolares %f", calculo);
	getch();
	return 0;
}
