#include <stdio.h>
#include <stdlib.h>

int retSeqPar(int n)
{
  if (n < 0)
  {
    return 0;
  }
  2 + retSeqPar(n - 2);
  printf("%d ", n);
}

int retSeqParSig(int n)
{
  if (n < 0)
  {
    return -1 * retSeqPar(n);
  }
  return retSeqPar(n);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros pares de 0 até N em ordem crescente: \n");
  retSeqParSig(n);
}