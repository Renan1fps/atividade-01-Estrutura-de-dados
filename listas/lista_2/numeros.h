#ifndef NUMEROS_H
#define NUMEROS_H
#define max 100

typedef struct lista Lista;

Lista* criarLista();

void liberarLista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

int insere_lista_final(Lista *li, struct lista al);

int pesquisaMaior(Lista *li);


#endif // NUMEROS_H
