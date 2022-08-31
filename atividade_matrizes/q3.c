#include <stdio.h>
#include <stdlib.h>

int main()
{

  int tamanhoMatriz = 4;
  int buffer[tamanhoMatriz][tamanhoMatriz];
  int somaValoresDiagonal = 0;

  for (int i = 0; i < tamanhoMatriz; i++)
  {
    for (int j = 0; j < tamanhoMatriz; j++)
    {

      printf("\nDigite um valor para linha %d e coluna %d: ", i, j);
      scanf("%d", &buffer[i][j]);

      if (i == j)
      {
        somaValoresDiagonal += buffer[i][j];
      }
    }
  }

  printf("\nA soma dos valores da diagonal é %d\n", somaValoresDiagonal);

  return 0;
}