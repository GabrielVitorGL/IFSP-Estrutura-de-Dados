#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int j = 5;

    if (j == 5)
    {
        j++;
        goto imprime;
    }

    j = 1350; // sera ignorada

imprime:
    printf("Valor de j: %d", j);

    printf("\n\n");

    system("pause");

    return 0;
}