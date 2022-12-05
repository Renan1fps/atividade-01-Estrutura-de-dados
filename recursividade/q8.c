#include <stdio.h>
#include <stdlib.h>

int converteParaBinario(int n)
{
  if (n < 2)
    return n;
  return (10 * converteParaBinario(n / 2)) + n % 2;
}

int main()
{
  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("Numeor convertido para binario:  %d\n", converteParaBinario(n));
}