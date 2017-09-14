/*este programa imprime los numeros del 1 al 10 usando la funcion while
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funcion principal
int main () {
	//declaracion de variable
	int num = 0;
	while(num<10){
		num=num+1;
		printf("%d \n",num);
	}
	getch();
	return 0;
}

