/*este programa suma los numeros del 1 al 100 usando la funcion while
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funcion principal
int main () {
	//declaracion de variable
	int num = 0;
	int suma = 0;
	
	//ciclo 
	while(num<100){
		num=num+1;
		suma=suma+num;
		printf("%d \n",suma);
	}
	getch();
	return 0;
}
