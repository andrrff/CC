#include<stdio.h>
 
int fatorial(int n)
{
    if (n == 0 || n == 1) {return n;}
    return fatorial(n - 1) * n;
}
 
int main()
{
    //! Fatorial
    printf("Fatorial de %i: %i", 10, fatorial(10));
    return 0;
}
