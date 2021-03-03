#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
    //! Multiplicação de dois numeros
    int numero01, numero02;
    int *numero01_ptr, *numero02_ptr;
    numero01_ptr = (int*)malloc(sizeof(int));
    numero01_ptr = &numero01;
    numero02_ptr = (int*)malloc(sizeof(int));
    numero02_ptr = &numero02;
    printf("Dê dois numeros:\n>> ");
    scanf("%i", &numero01);
    printf(">> ");
    scanf("%i", &numero02);
    printf("%i * %i = %i", *numero01_ptr, *numero02_ptr, 
                           *numero01_ptr * *numero02_ptr);
    free(numero01_ptr);
    free(numero02_ptr);
    return 0;
}
