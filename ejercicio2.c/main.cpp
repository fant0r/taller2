/*este programa lee un valor entero y dice si es par o impar
fecha:04 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de variables
	int num;
	
	//ingreso de datos
	printf("ingrese un numero \n");
	scanf("%d", &num);
	
	//proceso
	if(num%2==0){
		printf("el numero %d es par", num);
	}
	else{
		printf("el numero %d es impar", num);
	}
	getch();
	return 0;
}

