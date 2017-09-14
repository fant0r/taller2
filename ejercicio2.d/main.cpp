/*este programa lee un valor y dice si es positivo o negativo
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
	if(num<0){
		printf("el numero %d es negativo", num);
	}
	else{
		printf("el numero %d es positivo", num);
	}
	getch();
	return 0;
}
