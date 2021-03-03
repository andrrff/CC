#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
const float PI = 3.14;
 
int main()
{
    //! Calcule a área da circunferência: A = 2⊓.r²
    float raio;
    float raio_ptr;
    raio_ptr = (int*)malloc(sizeof(int));
    raio_ptr = &raio;
    printf("De o raio da circunferencia:\n>>");
    scanf("%f", &raio);
    printf("O resultado foi de A = %f", 2 * PI * pow(*raio_ptr, 2));
    free(raio_ptr);
    return 0;
}
