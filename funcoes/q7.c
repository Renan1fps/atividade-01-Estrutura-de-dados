#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float MaiorFator(int num);


int main()
{

    int valor;

    printf("Qual o valor que deseja analisar? ");
    scanf("%d", &valor);
    printf("\n");

    MaiorFator(valor);


    return 0;
}


float MaiorFator(int num){

    int primo = 1;
    int maiorDivisor;

    for (int i=2; i<num; i++){
        primo = 1;

    for (int j=2; j<num; j++){
        if (i%j==0){
        primo = 0;
      }
    }

    if (primo=1 && num%i==0){
      maiorDivisor=i;
    }
  }

    printf("O maior fator primo e : %d\n", maiorDivisor);

}
