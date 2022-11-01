#include <stdlib.h>
#include "questao2.h"
#include <string.h>
#include <stdio.h>

void Subtracao(int **p, int **f, int l, int c)
{

    int matrizSub[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrizSub[i][j] = p[i][j] - f[i][j];
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", matrizSub[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l * c; i++)
    {
        free(p[i]);
    }
}
