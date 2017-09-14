/*este programa genera la tabla de multiplicar de un numero que ingrese el usuario
fecha:08 dept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de variables
	int num;
	do{
		printf("por favor ingrese un numero entre 1 y 10 \n");
		scanf("%d", &num);
		if(num > 0 && num < 11){
			for(int i=1; i<11; i++){
				printf("%d*%d=%d \n", num, i, num*i);	
			}
			printf("\n");
		}else{
			printf("ingreso un valor fuera de rango, el programa se cerrara");
		}
	}
	while(num > 0 && num < 11);
	getch();
	return 0;
}

