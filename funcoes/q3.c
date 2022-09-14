#include <stdio.h>
#include <stdlib.h>

float funcCalculo(float h, float r);

int main()
{

    float altura;
    float raio;

    printf("Digite um valor para a altura: ");
    scanf("%f", &altura);

    printf("Digite um valor para o raio: ");
    scanf("%f", &raio);

    funcCalculo(altura, raio);

    return 0;
}

float funcCalculo(float h, float r)
{

    float result1;
    float resultfinal;
    float raioquad = r * r;
    result1 = 3.1414592 * raioquad;
    resultfinal = result1 * h;
    printf("\nO volume e: %.2f\n", resultfinal);
}
