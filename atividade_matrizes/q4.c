#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m ;

    printf("Determine quantas linhas e colunas tera a matriz quadrada: ");
    scanf("%d", &m);
    printf("\n");

    int matriz[m][m];
    int somaDiagonal = 0;



    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
            printf("\n");

            if((i + j) == m - 1){

                somaDiagonal += matriz[i][j];


            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            printf("%d ",matriz[i][j]);

        }
        printf("\n");
    }

    printf("\n");

    printf("A soma dos valores da diagonal e: %d \n\n",somaDiagonal);
    return 0;
}
