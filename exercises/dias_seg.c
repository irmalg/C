#include <stdio.h>

int main(){
	//Declaraci�n de variables
	int dias;
	float resultado;
	//Instrucciones para el usuario
	printf("Ingresa un numero de dias para calcular los segundos que tiene\n");
	//Leemos la variable dias
	scanf("%d", &dias);
	resultado = dias * (24 * 60 * 60);
	printf("En %d dias hay %f segundos.", dias, resultado);
	
	return 0;
}
