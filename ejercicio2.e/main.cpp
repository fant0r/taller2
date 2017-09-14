/*este programa lee tres numeros y los compara con un cuarto numero
fecha:04 sept 2017
creado por: manuel fernando soto
*/
#include<stdio.h>
#include<conio.h>

//funciom principal
int main () {
	//declaracion de variables
	int num1;
	int num2;
	int num3;
	int num4;
	
	//ingreso de datos
	printf("ingrese tres numeros \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	printf("ingrese otro numero \n");
	scanf("%d", &num4);
	
	//proceso
	if(num4==num1){
		printf("los numeros %d y %d son iguales", num4, num1);
	}
	else{
		if(num4==num2){
			printf("los numeros %d y %d son iguales", num4, num2);	
		}
		else{
			if(num4==num3){
				printf("los numeros %d y %d son iguales", num4, num3);	
			}
			else{
				printf("ninguno de los numeros ingresados es igual al numero %d", num4);	
			}
		}
	}
	
	return 0;
}

