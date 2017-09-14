/*este programa calcula la multiplicacion acumulada de los elementos de un vector
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>


//funcion principal
int main () {
	//declaracion de variables
	int multiplicacion=0;
	//declaracion de vector
	int vector []={2, 5, 4, 1, 7, 9};
	
	for (int i=0; i<=5; i++){
		if(i==0){
			multiplicacion=vector[i];
		}
		else{
			multiplicacion=multiplicacion*vector[i];
		}
	}
	
	printf("el resultado de la multiplicacion es %d", multiplicacion);
	getch();
	return 0;
}

