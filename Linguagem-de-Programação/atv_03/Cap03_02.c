#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
    //! Calcule a distancia de dois pontos no plano cartesiano
    float x_1, x_2, y_1, y_2;
    float *x_1_ptr, *x_2_ptr, *y_1_ptr, *y_2_ptr;
    x_1_ptr = (float*)malloc(sizeof(float));
    x_1_ptr = &x_1;
    x_2_ptr = (float*)malloc(sizeof(float));
    x_2_ptr = &x_2;
    y_1_ptr = (float*)malloc(sizeof(float));
    y_1_ptr = &y_1;
    y_2_ptr = (float*)malloc(sizeof(float));
    y_2_ptr = &y_2;
    printf("Insira a posicao do ponto 1\n>> x = ");
    scanf("%f", &x_1);
    printf(">> y = ");
    scanf("%f", &y_1);
    printf("Insira a posicao do ponto 2\n>> x = ");
    scanf("%f", &x_2);
    printf(">> y = ");
    scanf("%f", &y_2);
    float aresta_1 = *x_1_ptr - *x_2_ptr;
    float aresta_2 = *y_1_ptr - *y_2_ptr;
    if (aresta_1 < 0) {aresta_1 *= -1;}
    if (aresta_2 < 0) {aresta_2 *= -1;}
    printf("A distancia entre os dois pontos = %.2f", sqrt(pow(aresta_1, 2) + pow(aresta_2, 2)));
    free(x_1_ptr);
    free(x_2_ptr);
    free(y_1_ptr);
    free(y_2_ptr);
    return 0;
}
