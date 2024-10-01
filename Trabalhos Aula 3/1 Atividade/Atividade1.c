#include <stdio.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    char nome[100];
    int idade;
    float salario;

    printf("Digite o nome do funcionario: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}
