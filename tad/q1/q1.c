#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;

  printf("Insira a quantidade de alunos que deseja cadastrar: ");
  scanf("%d", &i);

  inserirAluno(i);

  return 0;
}