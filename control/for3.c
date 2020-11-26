#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main()
{
  int x,y,cont;
  for (x=0;x<=5;x++){ //Recorrer columnas
  	for (y=0;y<=2;y++){ //Recorrer filas
     		 printf("[%d]\t",x+y); //0 + 0
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
