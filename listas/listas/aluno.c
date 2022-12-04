#include <stdlib.h>
#include "alunos.h"

struct lista{
    int qtd;
    struct aluno dados[max];
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

int insere_lista_final(Lista *li, struct aluno al){
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

void addAluno(Lista *li){

    struct aluno aluno;


    for(int i = 0; i < max; i++){

        int escolha;

        printf("\nCadastro aluno %d: \n",i+1);


        printf("\nQual o numero da matricula do aluno %d: ", i+1);
        scanf("%d", &aluno.matricula);

        printf("\nQual a nota da atividade 1 do aluno %d: ",i+1);
        scanf("%f", &aluno.t1);

        printf("\nQual a nota da atividade 2 do aluno %d: ",i+1);
        scanf("%f", &aluno.t2);

        printf("\nQual a nota da prova 1 do aluno %d: ",i+1);
        scanf("%f", &aluno.n1);

        printf("\nQual a nota da prova 2 do aluno %d: ",i+1);
        scanf("%f", &aluno.n2);

        aluno.media = (((aluno.n1 *.4)+(aluno.t1*.6)+ (aluno.n2 * .4) + (aluno.t2 * .6))/2);

        int x = insere_lista_final(li,aluno);
        if(x){
            printf("\nMatricula %d inserida com sucesso.", aluno.matricula);
        }

        printf("Gostaria de cadastrar outro aluno: \n- 1 - para continuar.\n- 0 - para sair.\nEscolha: ");
        scanf("%d", &escolha);

        if(escolha == 0){
            printf("Saindo do cadastro!!");
            printf("\nForam cadastrados: %d alunos", tamanho_lista(li));
            break;
        }
        if(escolha !=1){
            printf("Número inválido, saindo do cadastro!!");
            printf("\nForam cadastrados: %d alunos", tamanho_lista(li));
            break;
        }
    }
}

int consulta_lista_por_matricula(Lista *li, int matricula, struct aluno *al){

    if(li==NULL){
        return 0;
    }
    int i =0;
    while(i < li->qtd && li->dados[i].matricula != matricula){
        i++;
    }
    if(i == li->qtd){
        return 0;
    }
    *al = li->dados[i];
    return 1;
}

int remove_lista_elemento(Lista* li, int matricula){
    if(li==NULL){
        return 0;
    }
    if(li->qtd==0){
        return 0;
    }
    int k,i=0;
    while(i < li->qtd && li->dados[i].matricula != matricula){
        i++;
    }
    for(k=i; k< li->qtd;k++){
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;
}



