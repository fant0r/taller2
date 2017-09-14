/*este porgrama toma la temperatura exterior cada cuatro horas y calcula la
temperatura media, la mas alta y la mas baja
fecha 10 sept 2017
creado por manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//funcion principal
int main () {
	//declaracion de variables
	int temperatura;
	int suma=0;
	int promedio;
	int mayor=0;
	int menor=40;
	
	//se genera secuencia aleatoria de temperatura	
	for(int h=1; h<=24; h+=4){
		temperatura=10+(rand()%40); 
		
		//promedio
		suma=suma+temperatura;
		promedio=suma/6;
	
		//calculo de temperatura mayor y menor
		if(temperatura>mayor){
			mayor=temperatura;
		}else{
			if(temperatura<menor){
				menor=temperatura;
			}
		}
	}
	
	//salida
	printf("la temperatura promedio fue %d \n", promedio);
	printf("la temperatura mas alta fue %d \n", mayor);
	printf("la temperatura mas baja fue %d \n", menor);
	getch();
	return 0;
}

