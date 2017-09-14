/*programa que mide una cadena de caracteres y la muestra en pantalla se es mayor de 10
fecha 12 sept 2017
creado por manuel fernado soto
*/
#include<conio.h>
#include<stdio.h>


//funcion principal
int main () {
	
	//declaracion de cadena
	char nombre [30];
	
	
	//ingreso de la cadena
	printf("escriba su nombre y al final escriba #\n\n");
	fgets(nombre,30,stdin);
	for(int i=0; i<=30; i++){
		
		if(nombre[i]=='#'){
			if(i>=10){
				printf("\n\n");
				printf("%s", nombre);	
			}
				
		}
		
	}
	
		
	
	getch();
	return 0;
}

