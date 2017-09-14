/*programa que calcula el valor de 1-2+3-4+5...+n en c++
fecha 10 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>



//funcion principal
int main () {
	//declaracion de variables
	int n;
	int sumaPositivos=0;
	int sumaNegativos=0;
	int sumaTotal=0;
	int negativo;
	//entrada de dato
	printf("ingrese un numero \n");
	scanf("%d", &n);
	
	//calculo de suma de numeros positivos
	for(int i=1; i<=n; i+=2){
		
		sumaPositivos=sumaPositivos+i;	
	}
	
	//calculo de suma de numeros negativos
	for(int i=2; i<=n; i+=2){
		
		negativo=i*(-1);
		sumaNegativos=sumaNegativos+negativo;	
	}
	
	//calculo final
	sumaTotal=sumaNegativos+sumaPositivos;
	
	printf("la suma es: %d", sumaTotal);
	getch();
	return 0;
}
