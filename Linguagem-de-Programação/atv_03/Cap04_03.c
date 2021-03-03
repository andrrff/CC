#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    //! Nota de corte
    printf("Insira 10 numeros:\n>> ");
    int quant_numeros = 10;
    int *numeros = (int*)calloc(quant_numeros, sizeof(int));
    scanf("%i", &numeros[0]);
    scanf("%i", &numeros[1]);
    scanf("%i", &numeros[2]);
    scanf("%i", &numeros[3]);
    scanf("%i", &numeros[4]);
    scanf("%i", &numeros[5]);
    scanf("%i", &numeros[6]);
    scanf("%i", &numeros[7]);
    scanf("%i", &numeros[8]);
    scanf("%i", &numeros[9]);
    printf("Media = %i\n", (numeros[0] + numeros[1] + numeros[2] + 
                         numeros[3] + numeros[4] + numeros[5] + 
                         numeros[6] + numeros[7] + numeros[8] + 
                         numeros[9]) / quant_numeros );
    if ((numeros[0] + numeros[1] + numeros[2] + 
                         numeros[3] + numeros[4] + numeros[5] + 
                         numeros[6] + numeros[7] + numeros[8] + 
                         numeros[9]) / quant_numeros >  5)
        printf("Passou!");
    else
        printf("Reprovou");
    free(numeros);
    return 0;
}
