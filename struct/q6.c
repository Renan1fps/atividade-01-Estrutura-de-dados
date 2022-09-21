#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;


int main()
{

    data data[2];

    for (int i=0; i<2; i++)
    {
        printf("Digite um dia ex: 01 : ");
        scanf("%d", &data[i].dia);
        printf("Digite o mes atual ex: 01: ");
        scanf("%d", &data[i].mes);
        printf("Digite o ano ex: 2000: ");
        scanf("%d", &data[i].ano);
        printf("\nA DATA DIGITADA E: %d/%d/%d\n", data[i].dia, data[i].mes, data[i].ano);
    }

    int anoMaior = 0;
    int anoMenor = 0;
    for (int i=0; i<2; i++)
    {

        if(data[i].ano > anoMaior || anoMaior == 0)
        {
            printf("\nMAIOR ANO %d\n", data[i].ano);
            anoMaior = data[i].ano;
        }

        if(data[i].ano < anoMaior || anoMenor == 0)
        {
            anoMenor = data[i].ano;
        }


    }

    printf("\nA DIFERENCA ENTRE AS DATAS E DE: %d anos\n", anoMaior - anoMenor);


}
