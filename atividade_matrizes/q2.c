#include <stdio.h>
#include <stdlib.h>

int main()
{

  int tamanhoMatriz = 0;
  printf("\nDigite a quantidade de linhas e colunas de uma matriz quadrada: ");
  scanf("%d", &tamanhoMatriz);

  char buffer[tamanhoMatriz][tamanhoMatriz];

  for (int i = 0; i < tamanhoMatriz; i++)
  {
    for (int j = 0; j < tamanhoMatriz; j++)
    {
      if (i == j)
      {
        buffer[i][j] = 'X';
      }
      else
      {
        buffer[i][j] = '-';
      }
    }
  }

  for (int linha = 0; linha < tamanhoMatriz; linha++)
  {
    for (int coluna = 0; coluna < tamanhoMatriz; coluna++)
    {
      printf("%c ", buffer[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}