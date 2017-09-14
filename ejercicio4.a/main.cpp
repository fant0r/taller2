/*este programa muestra los nuemeros ingresdos por el usuario hasta que introdusca cero
fecha: 08 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	int num;
	do{
		printf("ingrese un numero \n");
		scanf("%d", &num);
	}while (num!=0);
	getch();
	return 0;
}

