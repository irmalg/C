#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  system("clear"); //Limpiar pantalla
  int cont;//Declaración de variable
  
  for(cont=1;cont<10;cont++){
  	if(cont % 2==1){
  		printf("\n");
	  }
	printf("[%d]",cont);//10
  }
  printf("Valor final: %d\n",cont);//11
  getchar();
  return 0;
}
