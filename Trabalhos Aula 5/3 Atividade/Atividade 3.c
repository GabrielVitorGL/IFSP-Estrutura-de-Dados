#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    float vetorFloat[10];
    double vetorDouble[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Posicao %d do vetor de float: %p\n", i, &vetorFloat[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("Posicao %d do vetor de double: %p\n", i, &vetorDouble[i]);
    }

    printf("\n\n");

    system("pause");

    return 0;
}