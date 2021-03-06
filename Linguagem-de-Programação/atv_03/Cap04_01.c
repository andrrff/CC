#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
const float PI = 3.14;
 
int main()
{
    //! Se o resultado for menor que dois ele retorna 😀 se não 😥
    float raio;
    float *raio_ptr;
    raio_ptr = (float*)malloc(sizeof(float));
    raio_ptr = &raio;
    printf("De o raio da circunferencia:\n>>");
    scanf("%f", &raio);
    if (2 * PI * pow(*raio_ptr, 2) < 0)
        printf("😀");
    else 
        printf("😥");
    printf("O resultado foi de A = %f", 2 * PI * pow(*raio_ptr, 2));
    free(raio_ptr);
    return 0;
}
