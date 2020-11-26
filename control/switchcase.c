#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcion;
	int a = 10;
	int b = 30;
	int c;
	do{
		printf("-------------------\n");
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
				printf("La resta %d - %d es: %d",a,b,c);
				break;
			case 3:
				if(b == 0){
				printf("No esta definida la division entre 0\n");
				}else{
					c= a / b ;
					printf("La division es: %f",c);
				}
				break;
			case 6: 
				printf("Vuelva pronto");
				break;
			default:
				printf("No esta puesta correctamente la opcion\n");
		}
	printf("\nFin de Switch\n");
	}while(opcion != 6);
	return 0;
	printf("\nFin de Switch\n");
} 

