#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m = 10;
    int matriz[m][m];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            if(i < j){

                matriz[i][j] = (2*i) + (7*j) - 2;

            }
            else if(i == j){

                matriz[i][j] = (3*pow(i,2))- 1;

            }
             else if(i > j){

                matriz[i][j] = (4*pow(i,3))+ (5*pow(i,2)) + 1;

            }

        }
    }

      for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            printf(" %d \t",matriz[i][j]);

        }
        printf("\n");
    }



    return 0;
}
