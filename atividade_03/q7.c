#include <stdio.h>
#include <stdlib.h>

int main()
{
  char buffer[20];
  printf("\nDigite um nome: ");
  scanf("%[^\n]", buffer);

  int quantidadeEspacos = 0;
  int tamanho = strlen(buffer);

  for (int i = 0; i < tamanho; i++)
  {
    if (buffer[i] == ' ')
    {
      quantidadeEspacos++;
    }
  }

  printf("Quantidade de espaços na palavra: %d \n", quantidadeEspacos);

  return 0;
}