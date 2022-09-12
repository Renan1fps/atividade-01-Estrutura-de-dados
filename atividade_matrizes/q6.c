#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 3;
    int matriz[m][m];
    int soma[3] = {0,0,0};

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
            printf("\n");

        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            soma[j] += matriz[i][j];

        }
    }

    for(int i = 0; i < m; i++){

        printf(" %d ",soma[i]);

    }

    return 0;
}
