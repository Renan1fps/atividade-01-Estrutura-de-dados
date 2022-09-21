#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 6

typedef struct {
int dia;
int mes;
int ano;
} data;

typedef struct {
char nome[50];
data dataNasc;
int idade;
} pessoa;

int main() {

    int quantidadePessoas = 0;

    printf("Digite a quatidade de pessoas a serem armazenadas: ");
    scanf("%d", &quantidadePessoas);

pessoa pessoas[quantidadePessoas];
data dataAtual;
int i, idadeMaior, idadeMenor;

printf("Digite o dia de hoje : ");
scanf("%d", &dataAtual.dia);
printf("Digite o mes atual: ");
scanf("%d", &dataAtual.mes);
printf("Digite o ano atual: ");
scanf("%d", &dataAtual.ano);
printf("A DATA ATUAL E: %d/%d/%d", dataAtual.dia, dataAtual.mes, dataAtual.ano);

for (i=0; i<quantidadePessoas; i++) {
printf("\nNome da pessoa %d a ser cadastrada: ", i + 1);
fflush(stdin);
gets(pessoas[i].nome);
printf("Data de nascimento (dia): ");
scanf("%d", &pessoas[i].dataNasc.dia);
printf("Data de nascimento (mes): ");
scanf("%d", &pessoas[i].dataNasc.mes);
printf("Data de nascimento (ano): ");
scanf("%d", &pessoas[i].dataNasc.ano);

pessoas[i].idade = dataAtual.ano - pessoas[i].dataNasc.ano;
if ((dataAtual.mes - pessoas[i].dataNasc.mes < 0) ||
(dataAtual.mes - pessoas[i].dataNasc.mes == 0 &&
dataAtual.dia - pessoas[i].dataNasc.dia < 0)) {
pessoas[i].idade--;
}
}

idadeMaior = idadeMenor = 0;

for (i=0; i<quantidadePessoas; i++) {
if (pessoas[i].idade > pessoas[idadeMaior].idade) {
idadeMaior = i;
} else if (pessoas[i].idade < pessoas[idadeMenor].idade) {
idadeMenor = i;
}
}

printf("\nMaior idade: %s, com %d anos.", pessoas[idadeMaior].nome, pessoas[idadeMaior].idade);
printf("\nMenor idade: %s, com %d anos.\n\n", pessoas[idadeMenor].nome, pessoas[idadeMenor].idade);

}