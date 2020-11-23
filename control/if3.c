#include <stdio.h>
/*Comparar dos numeros y mostrar el mayor*/
int main()
{
	int n1,n2;
	
	puts("Introduzca el primer numero: ");
	scanf("%d",&n1);
	puts("Introduzca el segundo numero: ");
	scanf("%d",&n2);
	
	if(n1 == n2){
		printf("\t%d y %d son iguales\n", n1,n2);
	}else if(n1 < n2){
		printf("\t%d es mayor que %d", n2,n1);
	}else{
		printf("\t%d es mayor que %d", n1,n2);		
	}
	
	return 0;
} 
