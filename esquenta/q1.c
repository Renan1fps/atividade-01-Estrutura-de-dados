#include <stdio.h>

struct Pessoa
{
  char nome[50];
  int idade;
};

int main()
{

  struct Pessoa p[2];

  printf("Digite seu nome: ");
  scanf("%49[^\n]", p[1].nome);

  setbuf(stdin, NULL);
  printf("Digite seu sobrenome: ");
  scanf("%49[^\n]", p[0].nome);

  printf("\nO nome da pessoa é 1: %s\n", p[1].nome);
  printf("\nO sobrenome da pessoa é 1: %s\n", p[0].nome);

  return 0;
}