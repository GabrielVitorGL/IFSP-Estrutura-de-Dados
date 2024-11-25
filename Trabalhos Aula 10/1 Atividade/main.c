#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
struct aluno coleta_dados_aluno()
{
    struct aluno novo_aluno;

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &novo_aluno.matricula);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &novo_aluno.n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &novo_aluno.n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &novo_aluno.n3);

    return novo_aluno;
}

int main()
{
    int x, mat = 120, posicao = 1;
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

    struct aluno al, al2, al3, al4, dados_aluno;

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

    al4.matricula = 130;
    al4.n1 = 5.3;
    al4.n2 = 3.9;
    al4.n3 = 6.4;

    x = insere_lista_final(li, al4);
    if (x)
        printf("Inserção realizada com sucesso\n");
    else
        printf("Falha na inserção\n");

    x = insere_lista_inicio(li, al);
    if (x)
        printf("Inserção realizada com sucesso\n");
    else
        printf("Falha na inserção\n");

    x = insere_lista_ordenada(li, al2);
    if (x)
        printf("Inserção realizada com sucesso\n");
    else
        printf("Falha na inserção\n");

    x = insere_lista_ordenada(li, al3);
    if (x)
        printf("Inserção realizada com sucesso\n");
    else
        printf("Falha na inserção\n");

    x = remove_lista_final(li);
    if (x)
        printf("Remoção realizada com sucesso\n");
    else
        printf("Falha na remoção\n");

    x = remove_lista_inicio(li);
    if (x)
        printf("Remoção realizada com sucesso\n");
    else
        printf("Falha na remoção\n");

    x = remove_lista(li, mat);
    if (x)
        printf("Remoção realizada com sucesso\n");
    else
        printf("Falha na remoção\n");

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
        printf("Falha na consulta\n");

    mat = 110;
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
        printf("Falha na consulta\n");

    struct aluno novos_alunos[10] = {
        {200, 7.5, 8.0, 9.0},
        {201, 6.5, 7.3, 8.0},
        {202, 5.2, 6.0, 7.7},
        {203, 8.5, 8.5, 9.5},
        {204, 7.0, 7.5, 8.5},
        {205, 9.3, 9.5, 10.0},
        {206, 4.6, 5.0, 6.0},
        {207, 6.0, 6.9, 7.5},
        {208, 8.0, 8.5, 9.0},
        {209, 5.0, 5.3, 6.2}};

    for (int i = 0; i < 10; i++)
    {
        x = insere_lista_ordenada(li, novos_alunos[i]);
        if (x)
            printf("Aluno %d inserido com sucesso (Matrícula: %d).\n", i + 1, novos_alunos[i].matricula);
        else
            printf("Falha ao inserir o aluno %d.\n", i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n--- Inserindo aluno %d ---\n", i + 1);
        struct aluno novo_aluno = coleta_dados_aluno();

        x = insere_lista_ordenada(li, novo_aluno);
        if (x)
            printf("Aluno inserido com sucesso.\n");

        else
            printf("Falha ao inserir o aluno.\n");
    }

    printf("\n\n\nLista final:\n");
    for (int i = 1; i <= tamanho_lista(li); i++)
    {
        consulta_lista_pos(li, i, &dados_aluno);
        printf("Matrícula: %d | Nota 1: %.2f | Nota 2: %.2f | Nota 3: %.2f\n",
               dados_aluno.matricula, dados_aluno.n1, dados_aluno.n2, dados_aluno.n3);
    }

    libera_lista(li);
    return 0;
}