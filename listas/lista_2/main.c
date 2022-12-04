#include <locale.h>>
#include "numeros.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("Listas Estáticas\n\n");

    Lista *li;
    int esc;


    li = criarLista();

    addNumeros(li);

    printf("teste");

    int maiorvalor = pesquisaMaior(li);

    printf("Maior valor: %d", maiorvalor);
    printf("teste");

    return 0;
}
