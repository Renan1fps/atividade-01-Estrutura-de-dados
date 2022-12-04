#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{
  if (n == 0)
    return 0;
  else
    return n + soma(n - 1);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("Soma de 1 ate %d: %d\n", n, soma(n));

  return 0;
}