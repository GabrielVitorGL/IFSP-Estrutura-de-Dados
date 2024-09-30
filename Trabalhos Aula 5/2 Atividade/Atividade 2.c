#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf(" %d", &a);
    printf("Digite o segundo numero: ");
    scanf(" %d", &b);

    printf("\nEndereco da variavel a: %p \n", &a);
    printf("Conteudo da variavel a: %d \n", a);

    printf("Endereco da variavel b: %p \n", &b);
    printf("Conteudo da variavel b: %d \n\n", b);

    if (&a > &b)
    {
        printf("Maior endereco: %p \n", &a);
        printf("Conteudo da variavel que o endereco aponta: %d \n", a);
    }
    else
    {
        printf("Maior endereco: %p \n", &b);
        printf("Conteudo da variavel que o endereco aponta: %d \n", b);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
