#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[50];
};

int main()
{
    int idade;
    char name[50];
    char endereco[50];

    struct Pessoa p;


    printf("Digite o nome da pessoa: ");
    setbuf(stdin, NULL);
    scanf("%49[^\n]", p.nome);
    printf("\n");

    printf("Digite a idade da pessoa: ");
    scanf("%d", &p.idade);
    printf("\n");

    printf("Digite o endereço da pessoa: ");
    setbuf(stdin, NULL);
    scanf("%49[^\n]", p.endereco);

    printf("\nIdade da pessoa: %d", p.idade);
    printf("\nNome da pessoa: %s", p.nome);
    printf("\nEndereço da pessoa: %s", p.endereco);
    printf("\n");

}