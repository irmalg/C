#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf( "%s","Introduzca el primer número: ");
    scanf( "%f", &n1 );
    printf( "%s","Introduzca el segundo número: ");
    scanf( "%f", &n2 );
    printf( "%s","Introduzca el primer número: ");
    scanf( "%f", &n3 );
    
    if (n1 == n2 && n2 == n3){ //If. else-if, else
    	printf( "\n   %0.2f, %.2f y %.2f son iguales.\n", n1, n2, n3);
	}else if ( n1 >= n2 && n1 >= n3 ){
        printf( "\n   %.2f es el mayor.", n1 );
    }else{
        if ( n2 > n3 ){ //If anidados
            printf( "\n   %.2f es el mayor.", n2 );
			}else{
            printf( "\n   %.2f es el mayor.", n3 );
			}
    }

    return 0;
}
