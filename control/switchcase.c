#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcion;
	float a = 10;
	float b = 30;
	float c;
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Division:\n");	
	printf("\t 6.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion){
		case 1: 
			c= a + b ;
			printf("La suma es: %f",c);
			break;
		case 2: 
			c= a - b ;
			printf("La resta es: %f",c);
			break;
		case 3:
			if(b == 0){
				printf("No esta definida la division entre 0\n");
			}else{
				c= a / b ;
				printf("La division es: %f",c);
			}
			
			break;
		break;
		default:
			printf("No esta puesta correctamente la opcion\n");
		exit(0);
	}
	printf("\nFin de Switch\n");
	return 0;
} 

