#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[4][5];
    int soma = 0;
    float media[4];


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){

            printf("Digite o valor da nota %d para o aluno [%d]: ",j+1,i+1);
            scanf("%d", &notas[i][j]);
            printf("\n");
            soma += notas[i][j];
        }
        media[i] = soma /5;
        soma = 0;
    }


    for(int i = 0; i < 4; i++){
        printf("\n");
        printf("Notas aluno [%d]: ",i+1);
        printf("\n");
        for(int j = 0; j < 5; j++){

            printf("Nota %d para o aluno [%d]: %d",j+1, i+1, notas[i][j] );
            printf("\n");

        }

        printf("Media aluno: [%f] ",media[i]);
        printf("\n");

        if(media[i] >= 6){

            printf("O aluno foi aprovado");
            printf("\n");

        }
        else if(media[i] < 6 && media[i] >= 4 ){

            printf("O aluno foi para a recuperação");
            printf("\n");

        }
        else{

            printf("O aluno foi reprovado");
            printf("\n");

        }



    }

    /*

    for(int i = 0; i < m; i++){

        printf(" %d ",soma[i]);

    }
    */
    return 0;
}
