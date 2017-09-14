/*este programa muestra el mensaje 'buenos dias', luego pide el nombre de usuario
y nuevamente muestra el mensaje 'buenos dias' 'nombre del usuario'
fecha 12 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>



//funcion principal
int main(){
	
	//declaracion de cadena
	char saludo[]{'b','u','e','n','o','s',' ','d','i','a','s'};
	char nombre[30];
	char pregunta[]{'c','u','a','l',' ','e','s',' ','s','u',' ','n','o','m','b','r','e'};
	
	printf("%s\n\n", saludo);
	
	printf("%s\n\n" , pregunta);
	fgets(nombre,30,stdin);
	
	printf("%s %s ",saludo, nombre);
	
	
	
	getch();
	return 0;
}

