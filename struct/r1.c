#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
  char nome[50];
  int idade;
  float nota;
};

int main()
{

  struct Aluno aluno;

  printf("Digite o nome do aluno: ");
  scanf("%49[^\n]", aluno.nome);

  printf("Digite a idade do aluno: ");
  scanf("%d", &aluno.idade);

  printf("Digite a nota do aluno: ");
  scanf("%f", &aluno.nota);

  printf("Dados do aluno:\n Nome: %s\n Idade: %d\n Nota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
}