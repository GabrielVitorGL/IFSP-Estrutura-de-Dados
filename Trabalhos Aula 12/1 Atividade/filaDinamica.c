#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446

struct fila
{
    struct elemento *inicio;
    struct elemento *fim;
    int qtd;
};

struct elemento
{
    ALUNO dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

FILA *criaFila()
{
    FILA *fi = (FILA *)malloc(sizeof(FILA));
    if (fi != NULL)
    {
        fi->inicio = NULL;
        fi->fim = NULL;
        fi->qtd = 0;
    }
    return fi;
}

void liberaFila(FILA *fi)
{
    if (fi != NULL)
    {
        Elem *no;
        while (fi->inicio != NULL)
        {
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
}

void abortaPrograma()
{
    printf("ERRO! Fila nao foi alocada, ");
    printf("abortando programa...\n");
    system("pause");
    exit(1);
}

int tamanhoFila(FILA *fi)
{
    if (fi == NULL)
    {
        abortaPrograma();
    }
    return fi->qtd;
}

int filaCheia(FILA *fi)
{
    return 0;
}

int filaVazia(FILA *fi)
{
    if (fi == NULL)
    {
        abortaPrograma();
    }
    return (fi->qtd == 0);
}

int insereFila(FILA *fi, ALUNO al)
{
    if (fi == NULL)
    {
        abortaPrograma();
    }
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if (no == NULL)
    {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if (fi->fim == NULL)
    {
        fi->inicio = no;
    }
    else
    {
        fi->fim->prox = no;
    }
    fi->fim = no;
    fi->qtd++;
    return al.matricula;
}

int removeFila(FILA *fi)
{
    int matricula;
    if (fi == NULL)
    {
        abortaPrograma();
    }
    if (fi->inicio == NULL)
    {
        return 0;
    }
    matricula = fi->inicio->dados.matricula;
    Elem *no = fi->inicio;
    fi->inicio = fi->inicio->prox;
    if (fi->inicio == NULL)
    {
        fi->fim = NULL;
    }
    free(no);
    fi->qtd--;
    return matricula;
}

int consultaFila(FILA *fi, ALUNO *al)
{
    if (fi == NULL)
    {
        abortaPrograma();
    }
    if (fi->inicio == NULL)
    {
        return 0;
    }
    *al = fi->inicio->dados;
    return 1;
}