/*programa que determina las notas de 5 estudiantes
fecha 10 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//funcion principal
int main () {
	
	//declaracion de variables
	int nota;
	int ganoTodo=0;
	int perdio=0;
	int gano=0;
	for(int i=1; i<=3; i++){
		
		printf("ingrese la nota 1 del estudiante %d \n", i);
		scanf("%d", &nota);
		if(nota>=3){
		gano+=1;	
		}else{
			perdio+=1;
		}
		
		printf("ingrese la nota 2 del estudiante %d \n", i);
		scanf("%d", &nota);
		if(nota>=3){
			gano+=1;	
		}else{
			perdio+=1;
		}
		
		printf("ingrese la nota 3 del estudiante %d \n", i);
		scanf("%d", &nota);
		if(nota>=3){
			gano+=1;	
		}else{
			perdio+=1;
		}
		
		if(gano>=3){
			ganoTodo=ganoTodo+1;
		}
		gano=0;                       
		printf("\n\n");
	}
	
	printf("los estudiantes que ganaron todo fueron %d", ganoTodo);
	
	
	getch();
	return 0;
}

