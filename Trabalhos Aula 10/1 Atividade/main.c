#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main()
{
    int x, mat = 110, posicao = 1;
    Lista *li;
    li = cria_lista();

    x = tamanho_lista(li);
    printf("Tamanho da lista: %d\n", x);

    x = lista_cheia(li);
    if (x == 1)
    {
        printf("Lista cheia\n");
    }
    else
    {
        printf("Lista não está cheia\n");
    }

    x = lista_vazia(li);
    if (x)
    {
        printf("Lista vazia\n");
    }
    else
    {
        printf("Lista não está vazia\n");
    }

    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    x = insere_lista_final(li, al2);
    if (x)
    {
        printf("Inserção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na inserção\n");
    }

    x = insere_lista_final(li, al);
    if (x)
    {
        printf("Inserção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na inserção\n");
    }

    x = insere_lista_ordenada(li, al3);
    if (x)
    {
        printf("Inserção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na inserção\n");
    }

    x = remove_lista_final(li);
    if (x)
    {
        printf("Remoção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na remoção\n");
    }

    x = remove_lista_inicio(li);
    if (x)
    {
        printf("Remoção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na remoção\n");
    }

    x = remove_lista(li, mat);
    if (x)
    {
        printf("Remoção realizada com sucesso\n");
    }
    else
    {
        printf("Falha na remoção\n");
    }

    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if (x)
    {
        printf("Consulta realizada com sucesso\n");
        printf("Matrícula: %d\n", dados_aluno.matricula);
        printf("Nota 1: %.2f\n", dados_aluno.n1);
        printf("Nota 2: %.2f\n", dados_aluno.n2);
        printf("Nota 3: %.2f\n", dados_aluno.n3);
    }
    else
    {
        printf("Falha na consulta\n");
    }

    mat = 120;
    x = consulta_lista_mat(li, mat, &dados_aluno);
    if (x)
    {
        printf("Consulta realizada com sucesso\n");
        printf("Matrícula: %d\n", dados_aluno.matricula);
        printf("Nota 1: %.2f\n", dados_aluno.n1);
        printf("Nota 2: %.2f\n", dados_aluno.n2);
        printf("Nota 3: %.2f\n", dados_aluno.n3);
    }
    else
    {
        printf("Falha na consulta\n");
    }

    libera_lista(li);
    return 0;
}