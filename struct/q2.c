#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{

    char nome[50];
    int idade;
    char endereco[100];
} Pessoa;

int main()
{

    Pessoa p[50];
    bool condicao = true;
    int valor;
    int index = 0;

    while(condicao)
    {

        printf("\n\nDigite o numero de uma das opcoes abaixo. ");
        printf("\n1-Cadastrar uma nova pessoa. ");
        printf("\n2-Exibir pessoas cadastradas ");
        printf("\n3-Sair ");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &valor);
        printf("\n");

        switch(valor)
        {

        case 1:

            printf("Digite o nome da pessoa: ");
            setbuf(stdin, NULL);
            scanf("%49[^\n]", p[index].nome);
            printf("\n");

            printf("Digite a idade da pessoa: ");
            scanf("%d", &p[index].idade);
            printf("\n");

            printf("Digite o endereço da pessoa: ");
            setbuf(stdin, NULL);
            scanf("%49[^\n]", p[index].endereco);
            index ++;
            break;

        case 2:

            for(int i=0; i<index; i++)
            {
                printf("\n\nPessoa cadastrada %d\n\n", i +1);
                printf("\nIdade da pessoa: %d", p[i].idade);
                printf("\nNome da pessoa: %s", p[i].nome);
                printf("\nEndereço da pessoa: %s", p[i].endereco);
                printf("\n");
            }
            break;
        case 3:

            printf("\nSAINDO\n");
            condicao = false;
            break;

        }
    }
}
