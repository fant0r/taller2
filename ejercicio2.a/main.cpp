/*este programa lee dos numeros y dice cual es mayor
fecha:04 sep 2017
creado: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funcion principal
int main () {
	//declaracion de variables
	int num1;
	int num2;
	
	//ingreso de datos
	printf("ingrese dos numeros \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("\n");
	
	//proceso
	if (num1>num2){
		printf("el numero mayor es %d", num1);
	}
	else{
		printf("el numero mayor es %d", num2);	
	}
	
	getch();
	return 0;
}

