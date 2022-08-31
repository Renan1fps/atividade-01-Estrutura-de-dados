#include <stdio.h>

int main()
{

  int valores[5];
  int soma = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("\nDigite um número: ");
    scanf("%d", &valores[i]);
    soma += valores[i];
  }

  double media = soma / 5;
  printf("A média é: %.2f\n", media);

  return 0;
}