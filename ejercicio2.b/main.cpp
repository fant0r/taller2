/*este programa lee tres numeros y determina cual es el mayor
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de variables
	int num1;
	int num2;
	int num3;
	
	//ingreso de datos
	printf("ingrese tres numeros \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	printf("\n");
	
	//proceso
	if (num1>num2 && num1>num3){
		printf("el numero mayor es %d", num1);
	}
	else{
		if(num2>num1 && num2>num3){
		printf("el numero mayor es %d", num2);	
		}
		else{
		printf("el numero mayor es %d", num3);	
		}	
	}
	getch();
	return 0;
}

