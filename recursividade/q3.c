#include <stdio.h>

int retNaturaisDec(int n) {
	if(n == -1) {
		return 0;
	}
	printf("%d ", n);
	retNaturaisDec(n - 1);
}

int retNaturaisDecSig(int n) {
	if(n < 0) {
		return retNaturaisDec(n * -1);
	}
	return retNaturaisDec(n);
}


int main()
{

  int n;

  printf("Digite um numero interio maior que zero: ");
  scanf("%d", &n);

  printf("\nNumeros naturais de 0 ate N em ordem decrescente: \n");
  retNaturaisDecSig(n);
}