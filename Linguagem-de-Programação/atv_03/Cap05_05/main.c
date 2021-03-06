#include"lib.h"
 
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    int number = 5;
    ptr = &number;
    imprimir(*ptr);
    free(ptr);
    return 0;
}
