#include <stdlib.h>
#include <stdio.h>

int *alocMemory()
{

  int *ponteiro = malloc(5 * sizeof(int));

  return ponteiro;
}

int main()
{

  int *ponteiro = alocMemory();

  for (int i = 0; i < 5; i++)
  {
    printf("Digite um valor para posicao %d: ", i + 1);
    scanf("%d", &ponteiro[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Valor do array na posicao %d: %d\n", i, ponteiro[i]);
  }
}