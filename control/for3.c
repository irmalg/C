#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main()
{
  int x,y,z,cont;
  for (x=0;x<=5;x++){ //Recorrer columnas
  	for (y=0;y<=5;y++){ //Recorrer filas
     		 printf("[%d]\t",x+y); //0+0
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
