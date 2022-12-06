#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  float notaUm;
  float notaDois;
} Nota;

typedef struct
{
  char nome[50];
  int idade;
  char endereco[50];
  Nota nota;
} Pessoa;

int main()
{

  Pessoa p;

  printf("Digite o nome da pessoa: ");
  setbuf(stdin, NULL);
  scanf("%49[^\n]", p.nome);
  printf("\n");

  printf("Digite a idade da pessoa: ");
  scanf("%d", &p.idade);
  printf("\n");

  printf("Digite o endereço da pessoa: ");
  setbuf(stdin, NULL);
  scanf("%49[^\n]", p.endereco);

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &p.nota.notaUm);
  printf("\n");

  printf("Digite a segunda nota do aluno: ");
  scanf("%f", &p.nota.notaDois);
  printf("\n");

  printf("Dados da pessoa:\n Nome: %s\n idade: %d\n Endereço: %s\n Nota um: %f\n Nota dois: %f\n",
         p.nome, p.idade, p.endereco, p.nota.notaUm, p.nota.notaDois);
}