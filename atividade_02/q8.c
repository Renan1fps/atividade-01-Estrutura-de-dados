#include <stdio.h>
#include <stdlib.h>

int main()
{
  char buffer[20];
  printf("\nDigite um nome: ");
  scanf("%[^\n]", buffer);

  char bufferResult[20];
  int proximo[20];
  int tamanho = strlen(buffer);

  for (int i = 0; i < tamanho; i++)
  {
    bufferResult[i] = buffer[i] + 1;
    proximo[i] = buffer[i] + 1;
  }

  printf("String modificada: %s \n", bufferResult);
  for (int j = 0; j < tamanho; j++)
    printf("Proximo: %d \n", proximo[j]);
  return 0;
}