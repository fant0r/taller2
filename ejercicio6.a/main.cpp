/*programa que recibe un caracter y muestra si es una vocal minuscula o no
fecha 11 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de variables
	char caracter;
	
	//ingreso de datos
	printf("ingrese un caracter \n");
	scanf("%c", &caracter);
	
	//se usa el ciclo caso para determinar si el caracter ingresado es una vocal minuscula
	switch (caracter)
	{
	case 'a':
	case 'e':
	case 'i':
	case '0':
	case 'u':
		printf("el caracter ingresado es una vocal minuscula");
		break;
	default:
		printf("el caracter ingresado no es una vocal minuscula");
		
	}
	getch();
	return 0;
}

