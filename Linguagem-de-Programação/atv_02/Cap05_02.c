#include<stdio.h>
 
int main()
{
    //! Laço de continua ou não
    char continua;
    do
    {
        printf("Continua \"s/n\":\n>> ");
        scanf("%c", &continua);
    }while(continua != 's');
 
    printf("Terminou o laço!");
    return 0;
}
