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

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
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
        printf("Nome: %s", f[i].nome);
        printf("Idade: %d\n", f[i].idade);
        printf("Salário: %.2f\n", f[i].salario);
        printf("\n\n");
    }
    system("pause");
}