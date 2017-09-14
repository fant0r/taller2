/*programa: este programa calcula el salario de un empleado
fecha:23 septiembre 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>
//funcion principal
int main(){
	
	//declaracion de variables
	int horas_diurnas;
	int horas_noturnas;
	int horas_dominicales;
	int horas_festivos;
	int valor_hora = 2500;
	int calculo_diurnas;
	int calculo_noturnas;
	int calculo_dominicales;
	int calculo_festivos;
	int total_salario;
	
	//introduccion de datos por parte del usuario
	printf("por favor ingrese las horas diurnas laboradas \n\n");
	scanf("%d", &horas_diurnas);
	printf("por favor ingrese las horas noturnas laboradas \n\n");
	scanf("%d", &horas_noturnas);
	printf("por favor ingrese las horas de dias domingos laboradas \n\n");
	scanf("%d", &horas_dominicales);
	printf("por favor ingrese las horas de dias festivos  laboradas \n\n");
	scanf("%d", &horas_festivos);
	
	//calculos
	calculo_diurnas = horas_diurnas*valor_hora;
	calculo_noturnas = (horas_noturnas*valor_hora)*1.35;
	calculo_dominicales = (horas_dominicales*valor_hora)*1.5;
	calculo_festivos = (horas_festivos*valor_hora)*1.75;
	total_salario = calculo_diurnas+calculo_noturnas+calculo_dominicales+calculo_festivos;
	
	//salida del programa
	printf("calculadora de salario \n\n");
	printf("valor hora: %d \n", valor_hora);
	printf("valor horas diurnas: %d \n", calculo_diurnas);
	printf("valor horas noturnas: %d \n", calculo_noturnas);
	printf("valor horas dominicales: %d \n", calculo_dominicales);
	printf("valor horas festivos: %d \n\n", calculo_festivos);
	printf("total salario: %d ", total_salario);
	
	getch();
	return 0;
	
	
	
	
}
