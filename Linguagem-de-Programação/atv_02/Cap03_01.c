#include<stdio.h>
#include<math.h>
 
const float PI = 3.14;
 
int main()
{
    //! Calcule a área da circunferência: A = 2⊓.r²
    float raio;
    printf("De o raio da circunferencia:\n>>");
    scanf("%f", &raio);
    printf("O resultado foi de A = %f", 2 * PI * pow(raio, 2));
    return 0;
}
