#include <stdio.h>
#include <stdlib.h>
#include <locale.h>>
#include "alunos.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("Listas Estáticas\n\n");

    Lista *li;
    int esc;
    struct aluno aluno;

    li = criarLista();

    addAluno(li);

    printf("\n\nQual matricula deseja consultar: \n\n");
    scanf("%d", &esc);


    int y = consulta_lista_por_matricula(li, esc, &aluno.matricula);

    if(!y){
        printf("\nMatricula nao encontrada.\n");
    }
    else{
        printf("\nMatricula: %d",aluno.matricula);
        printf("\nNota prova 1: %.2f\nNota prova 2: %.2f",aluno.n1,aluno.n2);
        printf("\nNota atividade 1: %.2f\nNota atividade 2: %.2f",aluno.t1,aluno.t2);
    }

    printf("\n\nQual matricula deseja remover: \n\n");
    scanf("%d", &esc);

    int j = consulta_lista_por_matricula(li, esc, &aluno.matricula);

    int x = remove_lista_elemento(li, j);

    printf("\n\nQual matricula deseja ver a media: \n\n");
    scanf("%d", &esc);

    int t = consulta_lista_por_matricula(li, esc, &aluno.matricula);

        if(!y){
        printf("\nMatricula nao encontrada.\n");
    }
    else{
        printf("\nMedia aluno: %.2f",aluno.media);
    }

    void liberarLista(li);

    printf("\nTamanho da lista: %d", tamanho_lista(li));

    return 0;
}
