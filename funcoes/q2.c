#include <stdio.h>
#include <stdlib.h>

int funcDiasMes (int valor);


int main()
{

    int mes;
    int certo = 0;
    do{
        printf("Escolha um numero de 1 a 12: ");
        scanf("%d", &mes);

        if(mes >= 1 && mes <= 12){
            certo = 1;
            funcDiasMes(mes);
        }
    }while(certo == 0);
    return 0;
}


int funcDiasMes (int valor){

    if(valor == 1 || valor == 3 || valor == 5 || valor == 7 || valor == 8 || valor == 10 || valor == 12){

        printf("Saida = 31 dias");
        printf("\n");
    }
    else if(valor == 2){
        printf("Saida = 28 dias");
        printf("\n");
    }
    else{
        printf("Saida = 30 dias");
        printf("\n");
    }



}
