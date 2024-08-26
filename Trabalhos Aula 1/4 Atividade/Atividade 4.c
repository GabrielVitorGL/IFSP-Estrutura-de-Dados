#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    int v1[5], v2[5];
    int i, j, coincidencias = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o valor do elemento %d do vetor 1: ", i + 1);
        scanf(" %d", &v1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o valor do elemento %d do vetor 2: ", i + 1);
        scanf(" %d", &v2[i]);
    }

    // Exibir os dois vetores com seus somes
    printf("\n\nVetor 1: ");
    for (i = 0; i < 5; i++)
        printf(" %d ", v1[i]);

    printf("\nVetor 2: ");
    for (i = 0; i < 5; i++)
        printf(" %d ", v2[i]);

    printf("\n\n");

    // Indicar se há elementos iguais nos vetores
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (v1[i] == v2[j])
            {
                printf("\nO elemento %d do vetor 1 e igual ao elemento %d do vetor 2", i + 1, j + 1);
                coincidencias++;
            }

    if (coincidencias == 0)
        printf("\nNao ha elementos iguais nos vetores");

    printf("\n\n");

    system("pause");

    return 0;
}
