#include<stdio.h>
 
int main()
{
    //! Se for menor que 10, o resultado vai valer 0
    int numero01, numero02;
    printf("Dê dois numeros:\n>> ");
    scanf("%i", &numero01);
    printf(">> ");
    scanf("%i", &numero02);
    printf("%i + %i = %i", numero01, numero02, 
                           numero01 + numero02);
    if ((numero01 + numero02) < 10)
        printf("Resultado = 0");
    else
        printf("Resultado = %i", numero01 + numero02);
    return 0;
}
