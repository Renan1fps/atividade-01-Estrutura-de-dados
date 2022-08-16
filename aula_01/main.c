#include <stdio.h>
#include <stdbool.h>


void questionOne()
{
  float valorVeiculo, jurosAnual = 0;
  int quantidadeParcelas = 0;

  printf("\n Digite o valor do veículo ");
  scanf("%f", &valorVeiculo);

  printf("\n Digite a quantidade parcelas ");
  scanf("%d", &quantidadeParcelas);

  while (quantidadeParcelas > 48 || quantidadeParcelas < 1)
  {
    printf("\n Digite uma quantidade parcelas maior que 1 ou menor que 48 ");
    scanf("%d", &quantidadeParcelas);
  }

  printf("\n Digite a taxa de juros anual ");
  scanf("%d", &quantidadeParcelas);

  printf("\n Valor do carro %2f ", valorVeiculo);
  printf("\n Valor de entrada %2f ", valorVeiculo * 0.20);
  printf("\n Saldo a financiar %2f ", valorVeiculo - valorVeiculo * 0.20);
  printf("\n Valor final %2f ", valorVeiculo);
}




void questionTwo()
{
  printf("\nExecutando questão dois");
}

void questionThree()
{
  printf("\nExecutando questão três");
}

int main()
{

  bool condicao = true;
  int valor = 0;

  while (condicao)
  {
    printf("\n\nDigite qual programa deseja executar \n1-financiamento de carro\n2-calculo de juros\n3-Emprestimo");
    printf("\n4-Sair\n");
    scanf("%d", &valor);

    switch (valor)
    {

    case 1:
    {
      questionOne();
      break;
    }

    case 2:
    {
      questionTwo();
      break;
    }

    case 3:
    {
      questionThree();
      break;
    }

    case 4:
    {
      condicao = false;
      break;
    }
    }
  }

  return 0;
}
