#include<stdio.h>
 
int multiplicacao(int n, int m)
{
    if (m == 1) {return n;}
    if (m == 0) {return 1;}
    return multiplicacao(n, m - 1) + n;
}
 
int main()
{
    //! Multiplicação
    printf("%i multiplicado por %i: %i", 10, 2, multiplicacao(10, 2));
    return 0;
}
