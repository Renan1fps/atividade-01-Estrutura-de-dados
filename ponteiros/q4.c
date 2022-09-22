#include <stdio.h>
#include <stdlib.h>

int main()
{

  float matriz[3][3];
  int i;
  float *p = &matriz[0][0];

  for (i = 0; i < 9; i++)
  {

    printf("Endereco %d: %p \n", i + 1, (p + i));
    printf("\n\n");
  }
}