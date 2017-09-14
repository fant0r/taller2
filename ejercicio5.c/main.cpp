/*programam que calcula el valor de 1+2+3...+n
fecha 10 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>


//funcion principal
int main () {
	//declaracion de variables
	int n;
	int suma=0;
	//entrada de dato
	printf("ingrese un numero \n");
	scanf("%d", &n);
	
	//calculo
	for(int i=1; i<=n; i++){
	suma=suma+i;	
	}
	printf("la suma es: %d", suma);
	getch();
	return 0;
}

