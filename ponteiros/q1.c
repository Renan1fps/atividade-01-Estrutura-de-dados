#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 0, b = 0;
    int *ponteiro;

    if(&a > &b){

        ponteiro = &a;

    }
    else{

        ponteiro = &b;

    }

    printf("O endereço maior é: %p",ponteiro);
}