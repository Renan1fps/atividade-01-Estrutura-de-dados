#include <stdlib.h>
#include <stdio.h>

int main()
{

  int valorUsuario = 0;
  int media, soma = 0;

  printf("Qual o tamanho do array?: ");
  scanf("%d", &valorUsuario);

  int *p = malloc(valorUsuario * sizeof(int));

  for (int i = 0; i < valorUsuario; i++)
  {
    printf("Insira um valor para posição %d\n", i + 1);
    scanf("%d", &p[i]);

    soma += p[i];
  }

  media = soma / valorUsuario;

  printf("A soma dos valores é: %d e a média é: %d\n", soma, media);

  return 0;
}
