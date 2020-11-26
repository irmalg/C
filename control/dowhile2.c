#include <stdio.h> //Cabecera

int main() //Main
{
   int n; //Declaracion de variable
   n = 0; //Asignacion de valor
   do{ //Do-While
	    printf( "\tn vale: %d\n", n );
	    n++; //Incremento n   	
   } while (n < 0); 

    printf( "\nFin de do-while\n", n ); //Printf fuera del do-while
   return 0;
}
