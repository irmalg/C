#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
printf("Tama�o de datos b�sicos\n");
printf("=======================\n");
printf("Tipo\tTama�o en bytes\n");
printf("====\t===============\n");
printf("char\t%ld\n",sizeof(char));
printf("string\t%ld\n",sizeof(char[50]));
printf("int\t%ld\n",sizeof(int));
printf("float\t%ld\n",sizeof(float));
printf("double\t%ld\n",sizeof(double));
return 0;
}
