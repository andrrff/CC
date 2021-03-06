#include<stdio.h>
 
int fatorial(int n)
{
    if (n == 1) {return n;}
    return fatorial(n - 1) * n;
}
 
int main()
{
    //! Função recursiva de Fatorial
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    int number = 10;
    ptr = &number;
    printf("Fatorial(%i) = %i", 10, fatorial(*ptr));
    free(ptr);
    return 0;
}
