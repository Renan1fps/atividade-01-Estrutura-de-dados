#include <stdlib.h>
#include "questao2.h"
#include <string.h>
#include <stdio.h>

void Adicao(int **p, int **f, int l, int c)
{

    int matrizSoma[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrizSoma[i][j] = p[i][j] + f[i][j];
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", matrizSoma[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l * c; i++)
    {
        free(p[i]);
    }

    for (int i = 0; i < l * c; i++)
    {
        free(f[i]);
    }
}
