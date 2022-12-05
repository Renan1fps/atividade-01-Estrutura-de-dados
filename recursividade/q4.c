#include <stdio.h>
#include <stdlib.h>

int auxiliar(int n)
{
  if (n < 0)
  {
    return 0;
  }
  2 + auxiliar(n - 2);
  printf("%d ", n);
}

int numerosParesCrescente(int n)
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

  printf("\nNumeros pares de 0 até N em ordem crescente: \n");
  numerosParesCrescente(n);
  printf("\n");
}