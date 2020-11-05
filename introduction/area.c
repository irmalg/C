#include<stdio.h> //Input Output
#include<math.h>
#define PI 3.1416 //Definiendo una constante

int main(){
	float area, radio; //Declarando variables de tipo flotante
	radio = 5.12; //Asignando valor a variable radio
	area = PI * pow(5,2); //Adignando resultado de la operación a variable radio
	printf("Area\n"); //Imprimiendo título
	// Imprimiento resultado
	printf("El area es: %f\n", area);
	return 0;
}
