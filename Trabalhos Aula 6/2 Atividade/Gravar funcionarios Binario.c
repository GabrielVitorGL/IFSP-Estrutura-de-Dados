#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
    int ID;
    char nome[30];
    int idade;
    float salario;
};

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    FILE *f;
    struct funcionario func[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o ID do funcionário %d: ", i + 1);
        scanf("%d", &func[i].ID);
        printf("Digite o nome do funcionário %d: ", i + 1);
        getchar();
        fgets(func[i].nome, sizeof(func[i].nome), stdin);
        printf("Digite a idade do funcionário %d: ", i + 1);
        scanf("%d", &func[i].idade);
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &func[i].salario);
    }

    f = fopen("funcionarios.bin", "wb");
    if (f == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fwrite(func, sizeof(struct funcionario), 5, f);
    fclose(f);

    printf("Dados salvos com sucesso!\n");
    return 0;
}