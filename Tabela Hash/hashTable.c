// Gabriel Vitor Grossi Lourenço
// GU3054446

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashTable.h"

struct hash
{
    int qtd;
    int TABLE_SIZE;
    struct aluno **itens;
};

Hash *criaHash(int TABLE_SIZE)
{
    Hash *ha = (Hash *)malloc(sizeof(Hash));
    if (ha != NULL)
    {
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct aluno **)malloc(TABLE_SIZE * sizeof(struct aluno *));
        if (ha->itens == NULL)
        {
            free(ha);
            return NULL;
        }
        ha->qtd = 0;
        for (int i = 0; i < TABLE_SIZE; i++)
            ha->itens[i] = NULL;
    }
    return ha;
}

void liberaHash(Hash *ha)
{
    if (ha != NULL)
    {
        for (int i = 0; i < ha->TABLE_SIZE; i++)
            if (ha->itens[i] != NULL)
                free(ha->itens[i]);

        free(ha->itens);
        free(ha);
    }
}

int valorString(char *str)
{
    int valor = 7;
    int tam = strlen(str);
    for (int i = 0; i < tam; i++)
        valor = 31 * valor + (int)str[i];
    return valor;
}

int chaveDivisao(int chave, int TABLE_SIZE)
{
    return (chave & 0x7FFFFFFF) % TABLE_SIZE;
}

int sondagemLinear(int pos, int i, int TABLE_SIZE)
{
    return ((pos + i) & 0x7FFFFFFF) % TABLE_SIZE;
}

int insereHash_semColisao(Hash *ha, struct aluno al)
{
    if (ha == NULL || ha->qtd == ha->TABLE_SIZE)
        return 0;

    int chave = al.matricula;
    int pos = chaveDivisao(chave, ha->TABLE_SIZE);

    if (ha->itens[pos] != NULL && ha->itens[pos]->matricula == al.matricula)
        return -1;

    struct aluno *novo = (struct aluno *)malloc(sizeof(struct aluno));
    if (novo == NULL)
        return 0;

    *novo = al;
    ha->itens[pos] = novo;
    ha->qtd++;
    return 1;
}

int buscaHash_semColisao(Hash *ha, int mat, struct aluno *al)
{
    if (ha == NULL)
        return 0;

    int pos = chaveDivisao(mat, ha->TABLE_SIZE);
    if (ha->itens[pos] == NULL)
        return 0;

    *al = *(ha->itens[pos]);
    return 1;
}

int insereHash_enderecoAberto(Hash *ha, struct aluno al)
{
    if (ha == NULL || ha->qtd == ha->TABLE_SIZE)
        return 0;

    int chave = al.matricula;
    int i, pos, newPos;
    pos = chaveDivisao(chave, ha->TABLE_SIZE);

    for (i = 0; i < ha->TABLE_SIZE; i++)
    {
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if (ha->itens[newPos] == NULL)
        {
            struct aluno *novo = (struct aluno *)malloc(sizeof(struct aluno));
            if (novo == NULL)
                return 0;

            *novo = al;
            ha->itens[newPos] = novo;
            ha->qtd++;
            return 1;
        }
    }
    return 0;
}

int buscaHash_enderecoAberto(Hash *ha, int mat, struct aluno *al)
{
    if (ha == NULL)
        return 0;

    int i, pos, newPos;
    pos = chaveDivisao(mat, ha->TABLE_SIZE);

    for (i = 0; i < ha->TABLE_SIZE; i++)
    {
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if (ha->itens[newPos] == NULL)
            return 0;

        if (ha->itens[newPos]->matricula == mat)
        {
            *al = *(ha->itens[newPos]);
            return 1;
        }
    }
    return 0;
}

void imprimeAluno(struct aluno *al)
{
    if (al == NULL)
    {
        printf("Aluno nao encontrado.\n");
        return;
    }

    printf("Matricula: %d\n", al->matricula);
    printf("Nome: %s\n", al->nome);
    printf("Notas: %.2f, %.2f, %.2f\n", al->n1, al->n2, al->n3);
    printf("----------------------\n");
}

void exibeTabelaHash(Hash *ha)
{
    if (ha == NULL)
    {
        printf("Tabela hash nao existe.\n");
        return;
    }

    printf("\n----- TABELA HASH -----\n");
    for (int i = 0; i < ha->TABLE_SIZE; i++)
    {
        if (ha->itens[i] != NULL)
        {
            printf("Posicao %d:\n", i);
            imprimeAluno(ha->itens[i]);
            printf("\n");
        }
        else
        {
            printf("Posicao %d: Vazia\n\n", i);
        }
    }
}

void limpaHash(Hash *ha)
{
    if (ha != NULL)
    {
        for (int i = 0; i < ha->TABLE_SIZE; i++)
        {
            if (ha->itens[i] != NULL)
            {
                free(ha->itens[i]);
                ha->itens[i] = NULL;
            }
        }
        ha->qtd = 0;
    }
}

void menuOperacoes(Hash *ha, int comTratamentoColisao)
{
    int opcao;
    do
    {
        printf("\n----- MENU DE OPERACOES -----\n");
        printf("[1] Inserir aluno\n");
        printf("[2] Buscar aluno\n");
        printf("[3] Exibir tabela hash\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha a operacao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            struct aluno al;
            printf("\nMatricula: ");
            scanf("%d", &al.matricula);
            printf("Nome: ");
            scanf("%s", al.nome);
            printf("Notas (n1 n2 n3): ");
            scanf("%f %f %f", &al.n1, &al.n2, &al.n3);

            int resultado = comTratamentoColisao ? insereHash_enderecoAberto(ha, al) : insereHash_semColisao(ha, al);

            if (resultado == 1)
                printf("\nAluno inserido com sucesso!\n");
            else if (resultado == -1)
                printf("\nERRO: Matricula %d ja existe! Tente novamente.\n", al.matricula);
            else
                printf("\nErro ao inserir aluno! Tabela cheia.\n");
            break;
        }

        case 2:
        {
            int matricula;
            printf("\nMatricula a buscar: ");
            scanf("%d", &matricula);

            struct aluno al;
            int resultado = comTratamentoColisao ? buscaHash_enderecoAberto(ha, matricula, &al) : buscaHash_semColisao(ha, matricula, &al);

            if (resultado)
            {
                printf("\nAluno encontrado:\n");
                printf("Matricula: %d\n", al.matricula);
                printf("Nome: %s\n", al.nome);
                printf("Notas: %.1f, %.1f, %.1f\n", al.n1, al.n2, al.n3);
            }
            else
                printf("\nAluno nao encontrado!\n");
            break;
        }

        case 3:
            exibeTabelaHash(ha);
            break;

        case 0:
            printf("\nRetornando ao menu principal...\n");
            limpaHash(ha);
            break;

        default:
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);
}
