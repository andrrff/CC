#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    //! Se for menor que 10, o resultado vai valer 0
    int numero01, numero02;
    int *numero01_ptr, *numero02_ptr;
    numero01_ptr = (int*)malloc(sizeof(numero01));
    numero01_ptr = &numero01;
    numero02_ptr = (int*)malloc(sizeof(numero02));
    numero02_ptr = &numero02;
    printf("Dê dois numeros:\n>> ");
    scanf("%i", &numero01);
    printf(">> ");
    scanf("%i", &numero02);
    printf("%i x %i = %i\n", *numero01_ptr, *numero02_ptr, 
                           *numero01_ptr + *numero02_ptr);
    if ((*numero01_ptr + *numero02_ptr) < 10)
        printf("Resultado = 0");
    else
        printf("Resultado = %i", *numero01_ptr * *numero02_ptr);
    return 0;
}
