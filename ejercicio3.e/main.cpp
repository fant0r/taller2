/*este programa genera el factorial de un numero 
fecha: 04 sept 2017
creado por: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funcion principal
int main () {
	//declaracion de variable
	int num;
	int cont=1;
	int fact=1;
	//ingreso de datos
	printf("ingrese un numero para calcular el factorial \n");
	scanf("%d", &num);
	printf("\n");
	//ciclo 
	while(cont<num+1){
		fact=fact*cont;
		printf("%d \n", fact);
		cont=cont+1;
	}
	
	getch();
	return 0;
}

