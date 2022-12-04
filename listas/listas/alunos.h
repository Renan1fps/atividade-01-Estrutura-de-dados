#ifndef ALUNOS_H_INCLUDED
#define ALUNOS_H_INCLUDED
#define max 100

struct aluno{
    int matricula;
    float n1, t1, n2, t2;
    float media;
};

typedef struct lista Lista;

Lista* criarLista();
void liberarLista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

int insere_lista_final(Lista *li, struct num al);

void addAluno();

int consulta_lista_por_matricula(Lista *li, int mat, struct num *al);

int remove_lista_elemento(Lista* li, int matricula);



#endif // ALUNOS_H_INCLUDED
