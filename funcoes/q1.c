#include <stdio.h>


float funcMaiorValor (float valor1, float valor2);

int main()
{
  float num1, num2;
  

  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);

  printf("Digite o segundo valor: ");
  scanf("%f", &num2);

  printf("\n");

  funcMaiorValor(num1,num2);

  printf("\n");

  return 0;
}

float funcMaiorValor (float valor1, float valor2){

  if(valor1 > valor2){
    printf("O maior valor é o primeiro");
  }
  else{
    printf("O maior valor é o segundo");
  }
}