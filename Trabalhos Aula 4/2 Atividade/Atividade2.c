#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int ID;
    char nome[50];
    int idade;
    float salario;
} FUNCIONARIO;

FUNCIONARIO coletar_dados_funcionario()
{
    FUNCIONARIO f;
    printf("Digite o ID do funcionário: ");
    scanf("%d", &f.ID);
    printf("Digite o nome do funcionário: ");
    getchar();
    fgets(f.nome, 49, stdin);
    printf("Digite a idade do funcionário: ");
    scanf("%d", &f.idade);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &f.salario);

    return f;
}

void exibir_funcionarios(FUNCIONARIO f[], int quantidade)
{
    printf("\nRelatório de funcionários\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("ID: %d\n", f[i].ID);
        printf("Nome: %s", f[i].nome);
        printf("Idade: %d\n", f[i].idade);
        printf("Salário: %.2f\n", f[i].salario);
        printf("\n");
    }
}

void reajustar_salario(float *salario)
{
    *salario *= 1.10;
}

void rel_salario_corrigido(FUNCIONARIO f[], int quantidade)
{
    printf("\nSalários corrigidos:\n");
    for (int i = 0; i < quantidade; i++)
    {
        reajustar_salario(&f[i].salario);
        printf("Nome: %s", f[i].nome);
        printf("Novo salário: %.2f\n", f[i].salario);
        printf("\n");
    }
}

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade = 5;
    FUNCIONARIO funcionarios[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        funcionarios[i] = coletar_dados_funcionario();
    }

    exibir_funcionarios(funcionarios, quantidade);

    rel_salario_corrigido(funcionarios, quantidade);

    system("pause");
    return 0;
}
