#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  system("cls"); //Limpiar pantalla
  int cont;//Declaración de variable
  
  for(cont=0;cont<=1000;){
  	printf("[%d]",cont);
  	cont = cont+50;
  }
  printf("\n\nValor final de \'cont\': %d\n",cont);//11
  getchar();
  return 0;
}
