#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);

    switch (numero)
    {
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    default:
        printf("0");
        break;
    }

    printf("\n\n");

    system("pause");

    return 0;
}