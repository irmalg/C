#include <stdio.h>

int suma(int entero1, int entero2); //Declaración de función
/*Main*/
void main() {
    printf("El resultado de la primera suma es:  %d\n", suma(200,15));
    printf("El resultado de la segunda suma es:  %d\n", suma(1,500));
    printf("El resultado de la tercera suma es:  %d\n", suma(1000,1500));
    return;
}/*Fin Main*/

int suma(int entero1, int entero2){ //Implementación de función
    int resultado = 0;
    resultado = entero1 + entero2;
    return resultado;
}

