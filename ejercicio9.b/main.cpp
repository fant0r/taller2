/*este programa guarda una cadena de caracteres y luego la copia en otro arreglo de caracteres
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>



//funcion principal
int main(){
	
	//declaracion de cadena
	char pais[30];
	char copia[30];
	
	//aqui se le pide al usuario que ingrese una cadena
	printf("por favor ingrese el nombre de un pais donde quisiera viajar\n\n");
	fgets(pais,30,stdin);
	
	

	//aqui se copia la cadena original en otra cadena
	for (int i=0; i<30; i++){
	copia[i]=pais[i];	
	}
	printf("\n");
	printf("%s", copia);
	
	getch();
	return 0;
}

