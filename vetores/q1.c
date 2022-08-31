#include <stdio.h>

int main()
{

  int valores[6];

  for (int i = 0; i < 6; i++)
  {
    printf("\nDigite um número: ");
    scanf("%d", &valores[i]);
  }

  printf("Os numero digitados foram: ");
  for (int i = 0; i < 6; i++)
  {
    printf(" %d", valores[i]);
  }

  return 0;
}