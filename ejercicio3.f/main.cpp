/*este programa imprime los numeros de fibonaci
fecha:08 sept 2017
creado por manuel fernado soto
*/
#include<stdio.h>
#include<conio.h>
//funcion principal
int main() {
	//declaracion de variables
	int x = 0;
	int t = 1;
	int z = 0;
	int i = 1;
	//proceso
	while(i!=100){
		if (z==0) {
			printf("%d \n", z);
			printf("%d \n", t);
			z = x+t;
			x = t;
			t = z;
			
		} else {
			printf("%d \n", z);
			z = x+t;
			x = t;
			t = z;
		
		}
		i+=1; 
	}

	getch();
	return 0;
}


