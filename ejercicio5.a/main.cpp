/*este programa muetra la suma de los cuadrados de los 10 primeros enteros mayores que cero
fecha 10 sept 2017
creado por: manuelfernando soto
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>

//funcion principal
int main () {
	//declaracion de variables
	int cuadrado;
	int suma=0;
	for(int i=1; i<=11; i++){
		cuadrado=pow(i,2);
		suma=suma+cuadrado;
	}
	printf("%d \n", suma);
	getch();
	return 0;
}

