#include <stdio.h> // Cabecera

int main() //Función principal
{
	int A = 5;
	/*print("Introduce tu edad: "):
	scanf("%d",&edad);*/
	
	//Estructura de selección simple
	if (A == 0){
		printf("El numero es cero\n",A);
	}else if (A == 5){ 
		printf("El numero %d es positivo y es 5\n",A);
	}else if (A > 0){ 
		printf("El numero %d es positivo\n",A);
	}
	else{
		printf("El numero %d es negativo\n",A);
	}
	
	printf("Fin de la estructura de control\n");
return 0;
}
