#include "lib.h"
 
 
int potencia(int x, int y){
    if(y == 1) return x;
    return potencia(x, y - 1) * x;
}
 
void imprimir(int number)
{
    printf("Potencia: %i\n", potencia(number, number));
}
