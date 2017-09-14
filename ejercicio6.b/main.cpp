/*programa que lee un caracter y devuelve un resultado diciendo si es vocal minuscula
o mayuscula o no esuna vocal
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
	
	//proceso
	switch (caracter){
		
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("es una vocal minuscula \n");
		break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("es una vocal mayuscula \n");
		break;
	default:
		printf("no es una vocal  \n");
		
	}
	
	getch();
	return 0;
}

