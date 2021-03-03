#include<stdio.h>
#include<math.h>
 
const float PI = 3.14;
 
int main()
{
    //! Se o resultado for menor que dois ele retorna 😀 se não 😥
    float raio;
    printf("De o raio da circunferencia:\n>>");
    scanf("%f", &raio);
    if (2 * PI * pow(raio, 2) < 0)
        printf("😀");
    else 
        printf("😥");
    printf("O resultado foi de A = %f", 2 * PI * pow(raio, 2));
    return 0;
}
