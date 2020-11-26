/*El paso por valor envía una copia de los parámetros a la función por lo tanto los cambios que se hagan en ella no son tomados en cuenta dentro de la función main()*/
#include <stdio.h>
void sumar_valor(int numero); /* declaración de la función */

int main(void)
{
	int num = 57; // Asignación de valor
	sumar_valor(num); /* enviamos numero a la función */
	printf("Valor de numero dentro de main() es: %d\n", num);
	/* podemos notar que el valor de numero se modifica
	 * sólo dentro de la función sumar_valor pero en la principal
	 */
	return 0;
}

void sumar_valor(int numero) //57 num copia su valor a numero, num = 57 y numero = 57
{
	numero++; /* 58*/
	printf("Valor de numero dentro sumar_valor() es: %d\n", numero); //58
	return;
}
