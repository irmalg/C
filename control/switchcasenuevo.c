#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main()
{
	int opcion;
	float n1, n2, resultado;
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");	
	printf("\t 6.- Raiz cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	system("cls");
	
	if(opcion==6){
		printf("\n Dame el numero: ");
		scanf("%f", &n1);
	}
	else if(opcion>=7){
	}
	else{
		printf("\n Dame el primer numero: ");
		scanf("%f", &n1);
		printf("\n Dame el segundo numero: ");
		scanf("%f", &n2);
	}

	switch(opcion)
	{
	case 1: 
		resultado = n1 + n2;
		printf("El resultado es: %f", resultado);
		break;
	case 2: 
		resultado = n1 - n2;
		printf("El resultado es: %f", resultado);
		break;
	case 3: 
		resultado = n1 * n2;
		printf("El resultado es: %f", resultado);
		break;
	case 4: 
			if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado = n1 / n2;
		printf("El resultado es: %f", resultado);
		}
		break;
	case 5: 
		resultado = pow(n1,n2);
		printf("El resultado es: %f", resultado);
		break;
	case 6: 
		if(n1 < 0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(n1);
			printf("El resultado es: %f", resultado);
		}
		break;
	case 7: 
		printf("Salir");
		break;
	default:
		printf("No esta puesta correctamente la opcion\n");
		exit(0);
	}
	printf("\nFin de Switch\n");
	return 0;
} 
