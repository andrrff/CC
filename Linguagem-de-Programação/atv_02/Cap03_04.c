#include<stdio.h>
#include<math.h>
 
int main()
{
    //! Multiplicação de dois numeros
    int numero01, numero02;
    printf("Dê dois numeros:\n>> ");
    scanf("%i", &numero01);
    printf(">> ");
    scanf("%i", &numero02);
    printf("%i x %i = %i", numero01, numero02, 
                           numero01 * numero02);
    return 0;
}
