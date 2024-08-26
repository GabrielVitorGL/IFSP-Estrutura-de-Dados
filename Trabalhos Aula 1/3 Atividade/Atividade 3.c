#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);

    if (numero == 1)
        printf("A");
    else if (numero == 2)
        printf("B");
    else if (numero == 3)
        printf("C");
    else if (numero == 4)
        printf("D");
    else
        printf("0");

    printf("\n\n");

    system("pause");

    return 0;
}
