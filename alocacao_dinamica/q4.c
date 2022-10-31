#include <stdio.h>
#include <stdlib.h>

float *allocMemory(int valor)
{
  float *p = malloc(valor * sizeof(float));
  return p;
}

int main()
{

  int valor = 0;
  printf("Digite um valor: ");
  scanf("%d", &valor);

  float *new = allocMemory(valor);

  for (int i = 0; i < valor; i++)
  {
    printf("Insira um valor para posição %d\n", i + 1);
    scanf("%f", &new[i]);
  }


  for (int i = 0; i < valor; i++)
  {
    printf("Valor na posição %d: %.2f\n", i + 1, new[i]);
  }



}