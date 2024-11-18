#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446

void exibirConsulta(ALUNO *al, int status)
{
    if (status)
    {
        printf("Consulta realizada com sucesso:\n");
        printf("Matricula: %d\n", al->matricula);
        printf("Nota 1: %.2f\n", al->n1);
        printf("Nota 2: %.2f\n", al->n2);
        printf("Nota 3: %.2f\n", al->n3);
    }
    else
    {
        printf("Falha na consulta\n");
    }
}

int main()
{
    int x;
    ALUNO al_consulta, al1, al2, al3;
    al1.matricula = 100;
    al1.n1 = 5.3;
    al1.n2 = 6.9;
    al1.n3 = 7.4;

    al2.matricula = 110;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 120;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    FILA *fi = NULL;
    fi = criaFila();

    x = tamanhoFila(fi);
    printf("\nTamanho da fila: %d\n", x);

    x = filaCheia(fi);
    if (x)
        printf("Fila cheia\n");
    else
        printf("Fila nao esta cheia\n");

    x = filaVazia(fi);
    if (x)
        printf("Fila vazia\n");
    else
        printf("Fila nao esta vazia\n");

    x = insereFila(fi, al1);
    if (x)
        printf("Elemento %d inserido com sucesso\n", x);
    else
        printf("Falha na inserção\n");

    x = insereFila(fi, al2);
    if (x)
        printf("Elemento %d inserido com sucesso\n", x);
    else
        printf("Falha na inserção\n");

    x = insereFila(fi, al3);
    if (x)
        printf("Elemento %d inserido com sucesso\n", x);
    else
        printf("Falha na inserção\n");

    x = tamanhoFila(fi);
    printf("Tamanho da fila: %d\n", x);

    al_consulta.matricula = 100;
    x = consultaFila(fi, &al_consulta);
    exibirConsulta(&al_consulta, x);

    x = removeFila(fi);
    if (x)
        printf("Elemento %d removido com sucesso\n", x);
    else
        printf("Falha na remoção\n");

    al_consulta.matricula = 110;
    x = consultaFila(fi, &al_consulta);
    exibirConsulta(&al_consulta, x);

    liberaFila(fi);
}
