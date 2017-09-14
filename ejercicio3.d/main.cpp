/*este programa suma los numeros impares del 1 al 50 
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
	int impar = 0;
	//ciclo 
	while(num<50){
		num=num+1;
		if(num%2!=0){
			impar=num;
			suma=suma+impar;
			printf("%d \n",suma);
		}
		
	}
	getch();
	return 0;
}
