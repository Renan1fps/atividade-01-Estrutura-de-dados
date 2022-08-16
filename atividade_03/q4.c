#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int comparaStrings(char nomeUm[], char nomeDois[])
{
  int i = 0;
  while (nomeUm[i] == nomeDois[i] && nomeUm[i] != '\0' && nomeDois[i] != '\0')
  {
    i++;
  }
  if (nomeUm[i] == '\0' && nomeDois[i] == '\0')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{

  char nome1[50];
  char nome2[50];

  printf("\nDigite um nome: ");
  scanf("%[^\n]", nome1);
  setbuf(stdin, NULL);
  printf("\nDigite outro nome: ");
  scanf("%[^\n]", nome2);

  if (comparaStrings(nome1, nome2) == 1)
  {
    printf("\nNomes iguais\n");
  }
  else
  {
    printf("\nNomes diferentes\n");
  }

  return 0;
}