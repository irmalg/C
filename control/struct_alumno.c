#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

struct personas { // Crea la estructura del registro
	int num_cuenta;
	char nombre[40];
	char appaterno[40];
	char apmaterno[40];
	float promedio;
}alumno[2];

int main(){ // Inicio
 system("clear"); // Limpia pantalla
 /*Alumno 1*/
    for (int i=0; i<2; i++){
    	printf("Alumno %d", i+1);
    	printf("\n--------------------------\n");
    	
    	printf("Ingrese el numero de cuenta:");
 		scanf("%d",&alumno[i].num_cuenta);
		printf("Nombre alumno:");
 		scanf("%s",&alumno[i].nombre);
 		printf("Apellido Paterno:");
 		scanf("%s",&alumno[i].appaterno);
		printf("Apellido Materno:");
		scanf("%s",&alumno[i].apmaterno);
	}
 // Imprime el registro
 printf("Registro: %d %s %s %s\n",alumno[0].num_cuenta,alumno[0].nombre,alumno[0].appaterno,alumno[0].apmaterno);
 printf("Registro: %d %s %s %s\n",alumno[1].num_cuenta,alumno[1].nombre,alumno[1].appaterno,alumno[1].apmaterno);
 return 0;
} // Fin de programa| 
