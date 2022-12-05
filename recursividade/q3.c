#include <stdio.h>

int auxiliar(int n) {
	if(n == -1) {
		return 0;
	}
	printf("%d ", n);
	auxiliar(n - 1);
}

int numerosNaturaisDec(int n) {
	if(n < 0) {
		return auxiliar(n * -1);
	}
	return auxiliar(n);
}


int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros naturais de 0 ate N em ordem decrescente: \n");
  numerosNaturaisDec(n);
}