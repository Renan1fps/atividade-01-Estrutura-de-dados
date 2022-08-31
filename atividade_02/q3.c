#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{

  char nome[50];
  printf("\nDigite um nome: ");
  scanf("%[^\n]", nome);

  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
  int quantidadeVogais = 0;
  int tamanho = strlen(nome);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (nome[i] == vogais[j])
      {
        quantidadeVogais++;
      }
    }
  }

  printf("Quantidade de vogais %d \n", quantidadeVogais);
  printf("Quantidade de consoantes %d \n", tamanho - quantidadeVogais);

  return 0;
}