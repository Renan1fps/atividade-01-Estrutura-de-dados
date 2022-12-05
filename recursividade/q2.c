#include <stdio.h>

int auxiliar(int n)
{
  if (n == -1)
  {
    return 0;
  }
  1 + auxiliar(n - 1);
  printf("%d ", n);
}

int numeroNaturais(int n)
{
  if (n < 0)
  {
    return auxiliar(n * -1);
  }
  return auxiliar(n);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros naturais de 0 ate N em ordem crescente: ");
  numeroNaturais(n);
  printf("\n");
}