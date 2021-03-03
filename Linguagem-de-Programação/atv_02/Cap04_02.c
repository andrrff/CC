#include<stdio.h>
#include<math.h>
 
int main()
{
    //! Se a aresta for menor que zero ela é multiplicada por (-1)
    float x_1, x_2, y_1, y_2;
    printf("Insira a posicao do ponto 1\n>> x = ");
    scanf("%f", &x_1);
    printf(">> y = ");
    scanf("%f", &y_1);
    printf("Insira a posicao do ponto 2\n>> x = ");
    scanf("%f", &x_2);
    printf(">> y = ");
    scanf("%f", &y_2);
    float aresta_1 = x_1 - x_2;
    float aresta_2 = y_1 - y_2;
    if (aresta_1 < 0) {aresta_1 *= -1;}
    if (aresta_2 < 0) {aresta_2 *= -1;}
    printf("A distancia entre os dois pontos = %.2f", sqrt(pow(aresta_1, 2) + pow(aresta_2, 2)));
    return 0;
}
