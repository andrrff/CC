#include<stdio.h>
 
int poteciacao(int n, int m)
{
    if (m == 1) {return n;}
    if (m == 0) {return 1;}
    return poteciacao(n, m - 1) * n;
}
 
int main()
{
    //! Poteciacao
    printf("%i elevado a %i: %i", 10, 2, poteciacao(10, 2));
    return 0;
}
