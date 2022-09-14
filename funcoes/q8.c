#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char VerificaCaracter(char c);


int main()
{

    char valor;

    printf("Digite algum caracter? ");
    scanf("%c", &valor);
    printf("\n");

    VerificaCaracter(valor);


    return 0;
}


char VerificaCaracter(char c){

    char letraMinus[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char letraMaius[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for (int i=0; i<=strlen(letraMinus); i++){

        if(letraMinus[i] == c){
            printf("Retorno 1\n");
            return 1;
        }
        else if(letraMaius[i] == c){
            printf("Retorno 2\n");
            return 2;
        }
    }
    printf("Retorno 0\n");


}
