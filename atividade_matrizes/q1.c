#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matriz[2][2];
  int maiorValor, menorValor, posicaoMenorColuna, posicaoMaiorColuna, posicaoMaiorLinha, posicaoMenorLinha = 0;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("\nDigite um valor para matriz na linha %d e coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);

      if(matriz[i][j] > maiorValor){
        maiorValor = matriz[i][j];
        posicaoMaiorColuna = j;
        posicaoMaiorLinha = i;
      }

      if(matriz[i][j] < menorValor){
        menorValor = matriz[i][j];
        posicaoMenorColuna = j;
        posicaoMenorLinha = i;
      }
    }
  }

  printf("\nO maior valor está na linha %d e coluna %d \n", posicaoMaiorLinha, posicaoMaiorColuna);
  printf("\nO menor valor está na linha %d e coluna %d \n", posicaoMenorLinha, posicaoMenorColuna);

  return 0;
}