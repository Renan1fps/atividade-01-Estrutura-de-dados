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

    if (*(p + i) % 2 == 0)
    {

      printf("\nEndereco posicao %d que contem par: %p", i + 1, (p + i));
    }
  }
}