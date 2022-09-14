#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float funcCalculaMedia(float n1, float n2, float n3, char c);

int main()
{

    float nota1, nota2, nota3;
    char letra;

    printf("- Para media ponderada digite p\n- Para media aritmetica a\n letra:  ");
    scanf("%c", &letra);

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o valor da terceira nota: ");
    scanf("%f", &nota3);

    funcCalculaMedia(nota1, nota2, nota3, letra);

    return 0;
}

float funcCalculaMedia(float n1, float n2, float n3, char c)
{

    if (c == 'p')
    {

        float nota1 = n1 * 0.5;
        float nota2 = n2 * 0.3;
        float nota3 = n3 * 0.2;
        float resultfinal = nota1 + nota2 + nota3;
        printf("\nA media e: %.2f\n", resultfinal);
    }

    if (c == 'a')
    {

        float soma;
        soma = (n1 + n2 + n3);
        float resultfinal = soma / 3;
        printf("\nA media e: %.2f\n", resultfinal);
    }
}
