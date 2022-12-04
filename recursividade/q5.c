#include <stdio.h>
#include <stdlib.h>

int retSeqParDec(int n)
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
  retSeqParDec(n - 1);
}

int retSeqParDecSig(int n)
{
  if (n < 0)
  {
    return -1 * retSeqParDec(n);
  }
  return retSeqParDec(n);
}

int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros pares de 0 até N em ordem decrescente: \n");
  retSeqParDecSig(n);
}
