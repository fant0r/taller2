/*programa: muestra la tabla de multiplicar de un numero ingresado por el usuario
fecha:03 septiempbre 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main(){
	//declaracion de variables
	int num;
	
	
	//solicitud de datos al usuario
	printf("ingrese un numero \n");
	scanf("%d", &num);
	printf("\n");
	
	//proceso
	printf("%d*1=%d \n", num, num*1);
	printf("%d*2=%d \n", num, num*2);
	printf("%d*3=%d \n", num, num*3);
	printf("%d*4=%d \n", num, num*4);
	printf("%d*5=%d \n", num, num*5);
	printf("%d*6=%d \n", num, num*6);
	printf("%d*7=%d \n", num, num*7);
	printf("%d*8=%d \n", num, num*8);
	printf("%d*9=%d \n", num, num*9);
	printf("%d*10=%d \n", num, num*10);
	getch();
	return 0;	
	
}
