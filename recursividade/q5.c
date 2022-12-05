#include <stdio.h>
#include <stdlib.h>

int auxiliar(int n)
{
  if (n == 0)
  {
    printf("%d ", 0);
    return 0;
  }
  if (n % 2 == 0)
  {
    printf("%d ", n);
  }
  auxiliar(n - 1);
}

int numerosParesDecrescente(int n)
{
  if (n < 0)
  {
    return -1 * auxiliar(n);
  }
  return auxiliar(n);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros pares de 0 até N em ordem decrescente: \n");
  numerosParesDecrescente(n);
}
