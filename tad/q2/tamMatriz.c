#include <stdlib.h>
#include "questao2.h"
#include <string.h>
#include <stdio.h>

void linhasMatriz()
{

    int linhas, colunas = 0;

    printf("\nQuantas colunas tera a matriz: ");
    scanf("%d", &colunas);

    printf("\nQuantas linhas tera a matriz: ");
    scanf("%d", &linhas);

    int **p1 = criaMatriz(linhas, colunas, 1);
    int **p2 = criaMatriz(linhas, colunas, 2);

    int opcao;

    printf("\n\nDigite o numero da opçao que deseja: \n1 - Soma;\n2 - Subtração;\n");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
        Adicao(p1, p2, linhas, colunas);
        break;
    case 2:
        Subtracao(p1, p2, linhas, colunas);
        break;
    default:
        printf("Valor inválido");
        break;
    }
}
