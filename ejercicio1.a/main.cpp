/* programa: este programa genera el area, el diametro y la longitud de una
circunferencia
fecha:29 agosto 2017
creado por: manuem fernando soto
*/
#include <stdio.h>
#include <conio.h>


main (){
	float Radio;
	float pi = 3.141592;
	float area;
	float diametro;
	float longitud;
	
	printf("por favor ingrese el valor del radio de una circunferencia \n");
	scanf("%f", &Radio);
	area = pi*(Radio*Radio);
	diametro = 2*Radio;
	longitud = diametro*pi;
	printf ("el area del circulo es '%f', el diametro es '%f', y la longitud es '%f' \n" , area, diametro, longitud);
	
	getch();
	return 0;
	
}
