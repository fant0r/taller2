/*programa:este programa tiene un vector de numeros que calcula la suma de sus elementos
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	//declaracion de arreglo
	int numeros [] {2,5,8,6,7,9,11,7,12,1};
	
	//suma de los valores del vector
	int suma = 0;
	for (int i=0; i<10; i++){
		suma = suma+numeros [i];
	}
	printf ("la suma de los valores del vector es: %d", suma);
	getch();
	return 0;
}

