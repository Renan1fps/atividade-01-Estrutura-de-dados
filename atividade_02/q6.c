#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char buffer[50];
  printf("\nDigite um nome: ");
  scanf("%[^\n]", buffer);

  size_t size = strlen(buffer);
  for (int i = 0; i < size / 2; i++)
  {
    char tmp = buffer[i];
    buffer[i] = buffer[size - i - 1];
    buffer[size - i - 1] = tmp;
  }
  printf("palavra invertida: %s \n", buffer);
}