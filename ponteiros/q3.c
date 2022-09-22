#include <stdio.h>
#include <stdlib.h>

int main()
{

  float numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index;
  float *p = numeros;

  for (index = 0; index < 10; index++)
  {

    printf("Endereco: %p / Conteudo: %.2f", (p + index), *(p + index));
    printf("\n\n");
  }
}