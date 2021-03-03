#include "lib.h"
 
int fatorial(int n){
    if(n == 1 || n == 0) return n;
    return fatorial(n - 1) * n;
}
 
void imprimir(int number)
{
    printf("Fatorial: %i\n", fatorial(number));
}
