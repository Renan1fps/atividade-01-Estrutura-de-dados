#include <stdio.h>
#include <stdlib.h>

int auxiliar(int *vet, int n, int teste)
{
  if (n == 0)
    return teste;
  if (vet[n - 1] > vet[n])
  {
    int aux = vet[n];
    vet[n] = vet[n - 1];
    vet[n - 1] = aux;
    teste++;
  }
  auxiliar(vet, n - 1, teste);
}

int *menorElementoVetor(int *vet, int n)
{

  int teste = 0;
  int r = auxiliar(vet, n - 1, teste);
  if (r == 0)
  {
    return vet;
  }
  else
  {
    teste = 0;
    menorElementoVetor(vet, n);
  }
}

int main()
{
  int v[] = {2, 15, 4, 22, 11, 5, 7, 8, 18, 20};
  int *ptr = menorElementoVetor(v, 10);
  printf("%d é menor elemento do vetor\n", ptr[0]);
}