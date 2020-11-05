#include <stdio.h>

int main(){
	//Declaración de variables
	float lado1, lado2, lado3, suma;
	//Instrucciones para el usuario
	printf("Para calcular el perimetro de un triangulo\n");
	printf("Ingresa la longitud del primer lado \n");
	scanf("%f", &lado1); //Leemos la variable lado1
	printf("Ingresa la longitud del segundo lado \n");
	scanf("%f", &lado2); //Leemos la variable lado2
	printf("Ingresa la longitud del tercer lado \n");
	scanf("%f", &lado3); //Leemos la variable lado3
	suma = lado1 + lado2 + lado3;
	printf("El perimetro del triangulo es %0.2f", suma);
	
	return 0;
}
