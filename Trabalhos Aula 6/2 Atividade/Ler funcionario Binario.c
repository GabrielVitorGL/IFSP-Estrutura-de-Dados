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
    struct funcionario func;

    f = fopen("funcionarios.bin", "rb");
    if (f == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    //terceiro funcionario
    fseek(f, 2 * sizeof(struct funcionario), SEEK_SET); 
    fread(&func, sizeof(struct funcionario), 1, f);
    fclose(f);

    printf("ID: %d\n", func.ID);
    printf("Nome: %s", func.nome);
    printf("Idade: %d\n", func.idade);
    printf("Salário: %.2f\n", func.salario);

    return 0;
}