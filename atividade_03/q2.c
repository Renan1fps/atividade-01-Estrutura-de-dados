#include <stdio.h>

int main()
{

  char nome[50];
  printf("\nDigite um nome: ");
  scanf("%[^\n]", nome);

  if (nome[0] == 'A' || nome[0] == 'a')
  {
    printf("\nNome é: %s \n", nome);
  }
  else
  {
    printf("\nNão foi possivel obter o nome do aluno\n");
  }

  return 0;
}