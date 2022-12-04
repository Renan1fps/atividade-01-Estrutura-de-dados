#include <stdio.h>

int retNaturais(int n)
{
  if (n == -1)
  {
    return 0;
  }
  1 + retNaturais(n - 1);
  printf("%d ", n);
}

int retNaturaisSig(int n)
{
  if (n < 0)
  {
    return retNaturais(n * -1);
  }
  return retNaturais(n);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros naturais de 0 ate N em ordem crescente: \n");
  retNaturaisSig(n);
}