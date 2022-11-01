#include <stdlib.h>
#include "header.h"
#include <string.h>
#include <stdio.h>

typedef struct
{

  char nome[100];
  int matricula;
  float notasAtiv[2];
  float notasProva[2];
  float media;

} Aluno;

void inserirAluno(int quantidade)
{

  Aluno aluno[quantidade];

  for (int i = 0; i < quantidade; i++)
  {

    float somaAtividades, somaProva = 0;

    printf("\nDigite o nome do aluno %d: ", i + 1);
    setbuf(stdin, NULL);
    scanf("%49[^\n]", aluno[i].nome);

    printf("\nDigite o numero da matricula do aluno %d: ", i + 1);
    scanf("%d", &aluno[i].matricula);

    for (int j = 0; j < 2; j++)
    {

      printf("\nQual a nota da atividade %d do aluno %d: ", j + 1, i + 1);
      scanf("%f", &aluno[i].notasAtiv[j]);

      somaAtividades += aluno[i].notasAtiv[j];
    }

    for (int c = 0; c < 2; c++)
    {

      printf("\nDigite a nota da prova %d do aluno %d: ", c + 1, i + 1);
      scanf("%f", &aluno[i].notasProva[c]);

      somaProva += aluno[i].notasProva[c];
    }

    printf("\nSoma atividades : %f", somaAtividades);
    printf("\nSoma prova : %f", somaProva);

    aluno[i].media = ((somaAtividades / 2) * .4) + ((somaProva / 2) * .6);
  }

  for (int i = 0; i < quantidade; i++)
  {

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nMatricula: %d", aluno[i].matricula);
    printf("\nNome do aluno: %s", aluno[i].nome);
    printf("\nNota prova 1: %.2f", aluno[i].notasProva[0]);
    printf("\nNota prova 2: %.2f", aluno[i].notasProva[1]);
    printf("\nNota atividade 1: %.2f", aluno[i].notasAtiv[0]);
    printf("\nNota atividade 2: %.2f", aluno[i].notasAtiv[1]);
    printf("\nMedia final do aluno: %.2f", aluno[i].media);
  }
}