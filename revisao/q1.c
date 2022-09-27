/*
Crie um programa em C que apresente uma matriz de cinco colunas e cinco
linhas. Some os elementos que estão acima da diagonal principal desta matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int soma = 0;
  int matriz[5][5];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("\nDigite um valor para matriz na linha %d e coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);

      if (i > j)
      {
        soma += matriz[i][j];
      }
    }
  }

  for (int linha = 0; linha < 5; linha++)
  {
    for (int coluna = 0; coluna < 5; coluna++)
    {
      printf("%d ", matriz[linha][coluna]);
    }
    printf("\n");
  }

  printf("\nA soma dos valores é: %d \n", soma);

  return 0;
}