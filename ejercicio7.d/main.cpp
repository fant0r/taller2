/*este programa muestra un vector en orden inverso
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>


//funcion principal
int main () {

	//declaracion de vector
	int vector []={2, 5, 4, 1, 7, 9};
	
	for (int i=0; i<=5; i++){
		printf("%d, ", vector[i]);
	}
	
	printf("\n\n");
	printf("impresion de vector en orden inverso\n\n");
	for (int i=5; i>=0; i--){
		printf("%d, ", vector[i]);
	}
	
	
	getch();
	return 0;
}
