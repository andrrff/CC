#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int somando_ptr(int *n, int *m)
{
    return *n + *m;
}
 
int somando(int n, int m)
{
    return n + m;
}
 
int main()
{
    int number = 10;
    int number2 = 5;
    printf("Usando passagem por valor: %i\n", somando(number, number2));
    printf("Usando passagem por valor: %i", somando_ptr(&number, &number2));
    return 0;
}
