#include <stdlib.h>
#include "numeros.h"

struct lista{
    int qtd;
    struct num dados[max];
};


Lista* criarLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}

void liberarLista(Lista* li){
    free(li);
}

int tamanho_lista(Lista* li){
    if(li==NULL){
        return -1;
    }
    else{
        return li->qtd;
    }
}

int lista_cheia(Lista *li){
    if(li == NULL){
        return -1;
    }
    return (li-> qtd == max);
}

int lista_vazia(Lista *li){
    if(li == NULL){
        return -1;
    }
    return (li-> qtd == 0);
}

int insere_lista_final(Lista *li, struct num al){
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li)){
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}


void addNumeros(Lista *li){

    struct num num;

    for(int i = 0; i < max; i++){

        int escolha;

        printf("\nCadastro de valores%d: \n",i+1);


        printf("\nQual o numero da posição %d: ", i+1);
        scanf("%d", &num.numero);

        int x = insere_lista_final(li,num);
        if(x){
            printf("\nNúmero da posição %d inserida com sucesso.", i + 1);
        }

        printf("Gostaria de cadastrar outro número: \n- 1 - para continuar.\n- 0 - para sair.\nEscolha: ");
        scanf("%d", &escolha);

        if(escolha == 0){
            printf("\nSaindo do cadastro!!");
            printf("\nForam cadastrados: %d números", tamanho_lista(li));
            break;
        }
        if(escolha !=1){
            printf("Número inválido, saindo do cadastro!!");
            printf("\nForam cadastrados: %d números", tamanho_lista(li));
            break;
        }
    }
}

int pesquisaMaior(Lista *li)
{
    int maior = li-> qtd;
    while(li != NULL)
    {
        if(li->qtd > maior)
            maior = li->qtd;
        li = li->dados;
    }
    return maior;
}
