#include <stdio.h>
#include <stdlib.h>

struct Aluno{
  char nome[50];
  char matricula[20];
  double notas[3];
};

int main(){

  struct Aluno aluno;

  printf("\nOcupação de memoria de estrutura %d\n", sizeof(aluno));

}