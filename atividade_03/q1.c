#include <stdio.h>

int main()
{

  char palavra[50] = {"Teste de tamanho"};
  int index = 0;
  int tamanho = 0;

  while (palavra[index] != '\0'){
    tamanho ++;
    index ++;
  }

  printf("\nTamanho da palavra é %d\n", tamanho);
    

  return 0;
}