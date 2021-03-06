#include<stdio.h>
 
int main()
{
    //! Numeros primos até 1000
    int dividendo, divisor = 1, contador;
    for (dividendo = 2; dividendo < 1000; dividendo++)
    {
        while (divisor <= dividendo && contador < 3)
        {
            if (dividendo % divisor == 0)
                contador++;
            divisor++;
        }
        if (contador == 2)
            printf("%i\n", dividendo);
        divisor = 1;
        contador = 0;
    }
    return 0;
}
