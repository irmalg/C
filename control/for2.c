#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont;
 
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
  		if (x == y){
  			printf("[0,0]\t");
		}else{
			printf("[%d,%d]\t",x,y);
		}	
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
