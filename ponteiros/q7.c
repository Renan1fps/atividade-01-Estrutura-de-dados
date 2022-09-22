#include <stdio.h>
#include <stdlib.h>

int main()
{
  int p1;
  int *p2 = NULL, **p3 = NULL, ***p4 = NULL;

  printf("\nDigite um valor a p: ");
  scanf("%d", &p1);

  p2 = &p1;
  p3 = &p2;
  p4 = &p3;

  printf("\nConteudo p1: %d", p1);
  printf("\nConteudo p2: %d", *p2 * 2);
  printf("\nConteudo p2: %d", **p3 * 3);
  printf("\nConteudo p2: %d", (***p4) * 4);
}