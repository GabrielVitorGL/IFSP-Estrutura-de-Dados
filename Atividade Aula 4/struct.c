/*
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome [31];
    int idade;
};

int main() {
    struct pessoa p[2];
    strcpy (p[0].nome, "Joao da Silva");
    p[0].idade = 35;
    strcpy (p[1] .nome, "Maria Eduarda");
    (p[1].nome,
    p[1].idade = 27;
    printf("Dados pessoa 1: \n");
    printf("Nome: %s\n", p[0].nome);
    printf("Idade: %d\n", p[0].idade);
    printf("\n\n");
    printf("Dados pessoa 2: \n");
    printf("Nome ..: %s\n", p[1].nome);
    printf("Idade: %d\n", p[1].idade);
    printf("\n\n\n");
    system("pause");
}


struct funcionario{
    int ID;
    char nome [30];
    int idade;
    float salario;
};


Reescreva o programa do exemplo anterior substituindo a
estrutura “pessoa” pela estrutura “funcionário”;

• Modifique o programa para que o usuário possa fornecer os
dados necessários relativos aos funcionários de uma
empresa fictícia. Você deve gerar entradas para 5
funcionários;

• Imprima todo o vetor com todos os dados funcionários na
tela no estilo de um relatório;

Utilize o fgets para a leitura do nome do funcionário.
Utilize a biblioteca locale.h para acentuação.
Utilize o fflush para limpar o buffer antes de ler o nome.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct funcionario
{
    int ID;
    char nome[50];
    int idade;
    float salario;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct funcionario f[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o ID do funcionário %d: ", i + 1);
        scanf(" %d", &f[i].ID);
        printf("Digite o nome do funcionário %d: ", i + 1);
        getchar();
        fgets(f[i].nome, 49, stdin);
        printf("Digite a idade do funcionário %d: ", i + 1);
        scanf(" %d", &f[i].idade);
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf(" %f", &f[i].salario);
    }
    printf("\n\n");
    printf("Relatório de funcionários\n");
    for (i = 0; i < 5; i++)
    {
        printf("ID: %d\n", f[i].ID);
        printf("Nome: %s\n", f[i].nome);
        printf("Idade: %d\n", f[i].idade);
        printf("Salário: %.2f\n", f[i].salario);
        printf("\n\n");
    }
    system("pause");
}