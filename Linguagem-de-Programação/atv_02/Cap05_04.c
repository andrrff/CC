#include<stdio.h>
 
int fatorial(int n)
{
    if (n == 1) {return n;}
    return fatorial(n - 1) * n;
}
 
int main()
{
    //! Função recursiva de Fatorial
    printf("Fatorial(%i) = %i", 10, fatorial(10));
    return 0;
}
