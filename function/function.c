#include <stdio.h>

void saludo(void){ //Declarando e Implementando la funci�n
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la funci�n */
}
 
int main(void){ /* Funci�n principal del programa */
	saludo(); /* llamada a la funci�n saludo*/
	saludo(); 
	saludo(); 
	return 0; /* sale del programa con c�digo 0 (correcto) */
}
