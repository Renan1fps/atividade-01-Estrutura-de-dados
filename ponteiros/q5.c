#include <stdio.h>
#include <stdlib.h>

int main()
{

  int array[5];
  int i;
  int *p = array;

  for (i = 0; i < 5; i++)
  {

    printf("\nDigite um valor para a posicao %d: ", i + 1);
    scanf("%d", &array[i]);
  }
  for (i = 0; i < 5; i++)
  {

    printf("\nValor posicao %d: %d", i + 1, *(p + i) + *(p + i));
  }
}