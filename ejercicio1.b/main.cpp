/*programa: este programa calcula el area de un traingulo
fecha: 29 agosto 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal

int main(){
	//declaracion de variables
	float base;
	float altura;
	float area;
	
	//impresion de texto para solicitar al usuario que ingrese los valores
	printf("ingrese la base y la altura de un triangulo para calcular el area \n");
	
	//lectura de los valores ingresados por el usuario
	scanf("%f", &base);
	scanf("%f", &altura);
	
	//ralizacion de calculos
	area = base*altura;
	
	//impresion en pantalla del resultado
	printf("el area del triangulo es '%f'", area);
	
	//crea una pausa para que no se cierre la aplicacion 
	getch();
	return 0;
	
}
