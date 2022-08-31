#include <stdio.h>
#include <stdlib.h>

int main()
{
  char vogais[5] = {"1113"};
  int quantidadeUm = 0;
  int tamanho = strlen(vogais);

  for (int i = 0; i < tamanho; i++)
  {
    if (vogais[i] == '1')
    {
      quantidadeUm++;
    }
  }

  printf("Quantidade de 1 na palavra: %d \n", quantidadeUm);

  return 0;
}