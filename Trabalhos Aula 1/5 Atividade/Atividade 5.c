#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    int matriz[5][5], v[10];
    int i, j, soma = 0;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
            scanf(" %d", &matriz[i][j]);
        }

    printf("\n\nTotal por linha:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            soma += matriz[i][j];
        printf("\nSoma da linha %d: %d", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }

    printf("\n\nTotal por coluna:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            soma += matriz[j][i];
        printf("\nSoma da coluna %d: %d", i + 1, soma);
        v[i + 5] = soma;
        soma = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n\nSoma da linha %d: %d", i + 1, v[i]);
        printf("\nSoma da coluna %d: %d", i + 1, v[i + 5]);
    }

    // Exibir a matriz
    printf("\n\nMatriz:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf(" %d ", matriz[i][j]);
        printf("\n");
    }

    printf("\n\n");

    system("pause");

    return 0;
}
