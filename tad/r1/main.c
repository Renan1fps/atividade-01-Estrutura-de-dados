#include "soma.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int a, b = 0;

  printf("Digite um valor para A: ");
  scanf("%d", &a);

  printf("Digite um valor para B: ");
  scanf("%d", &b);

  int somaNumeros = soma(a, b);

  printf("A soma é: %d", somaNumeros);
}
