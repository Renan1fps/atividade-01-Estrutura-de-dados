#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b;
  int *p;

  printf("Digite um valor para a: ");
  scanf("%d", &a);

  printf("\nDigite um valor para: ");
  scanf("%d", &b);

  printf("\nEndereço da variavel a: %p", &a);
  printf("\nEndereço da variavel b: %p", &b);

  if (&a > &b)
  {

    p = &a;
  }
  else
  {

    p = &b;
  }

  printf("\nMaior endereço: %d", *p);
}