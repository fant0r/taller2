/*programa que muestras los meses del año deacuerdo al numero que ingrese el usuario
del 1 al 12
fecha 11 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	
	//declaracion de variables
	int numero;
	
	//ingreso de datos
	printf("ingrese un numero del 1 al 12 \n");
	scanf("%d", &numero);
	
	//proceso
	switch (numero){
	
	case 1:
		printf("enero");
		break;
	case 2:
		printf("febrero");
		break;	
	case 3:
		printf("marzo");
		break;
	case 4:
		printf("abril");
		break;	
	case 5:
		printf("mayo");
		break;	
	case 6:
		printf("junio");
		break;	
	case 7:
		printf("julio");
		break;	
	case 8:
		printf("agosto");
		break;	
	case 9:
		printf("septiembre");
		break;	
	case 10:
		printf("octubre");
		break;	
	case 11:
		printf("noviembre");
		break;	
	case 12:
		printf("diciembre");
		break;	
	default:
		printf("ha ingresado un valor no valido  \n");
		
	}
	
	getch();
	return 0;
}
