#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont;
 
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
     		 printf("[%d,%d]\t",x,y);
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
