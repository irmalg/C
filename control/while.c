#include <stdio.h> //Librerias
/*
	Descripción: mostrar el negativo de un numero entero y sumarlos
	
*/
int main() //Main
{

   int n, a; //Declaración de variables
   a = 0; //Asignando Valor
   
    printf( "Introduzca un numero entero: " );
    scanf( "%d", &n ); //Almacenamiento opción del usuario

     while( n > -1 && n <= 10 ){ // 0 - 10
	     if ( n == 0 ){ //Cachar al cero
	      printf( "\tERROR: El cero no tiene negativo.\n" );
		}else{
			printf( "El opuesto es: %d\n", -n );
	    	//a += n;
	    	a = a + n;			
		} //Fin if-else
		//n++;
   		printf( "\tSuma: %d\n", a );
   		if (a >= 100){ //Si la suma es mayor o igual a 100
   			break;
		   }
	}//Fin de While
   return 0;
}
