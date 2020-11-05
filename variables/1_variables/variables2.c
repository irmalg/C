#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, d; //Declaro varible 
int a1, b1, c1;
int main()
{
	printf("Dame el \'primer\' numero:");
	scanf("%f",&a);
	
	printf("\nDame el \'segundo\' numero:");
	scanf("%f",&b);
	
	printf("\nSuma\n");
	c = a + b; // Suma o adición
	printf("\t%0.2f + %0.2f = %0.2f\n",a , b, c);

	printf("Resta\n");
	c = a - b; // Resta
	printf("\t%0.2f - %0.2f = %0.2f\n",a , b, c);
	
	printf("Multiplicacion\n");
	c = a * b; // Multiplicación
	printf("\t%0.2f * %0.2f = %0.2f\n",a , b, c);
	
	printf("Division\n");
	c = a / b; // División
	printf("\t%0.2f / %0.2f = %0.2f\n",a , b, c);
	
	printf("Modulo\n");
	a1 = a;
	b1 = b;
	c1 = a1 % b1; // División
	printf("\tEl modulo de %d/%d = %d\n",a1 , b1, c1);
	
	printf("Raiz cuadrada\n");
	c = sqrt(a);
	printf("\tLa Raiz cuadrada de %f es: %f/n", a, c);
	c = sqrt(b);
	printf("\tLa Raiz cuadrada de %f es: %f/n", b, c);
	
	printf("Potencia\n");
	c = pow(a,b);
	printf("\t%0.2f elevado a la potencia %0.2f es %0.2f\n", a, b, c);
	c = pow(b,a);
	printf("\t%0.2f elevado a la potencia %0.2f es %0.2f\n", b, a, c);
	
	c = a+b*a+b;
	printf("\t%0.2f + %0.2f * %0.2f + %0.2f = %0.2f\n",a, b, a, b, c);				
return 0;
}
