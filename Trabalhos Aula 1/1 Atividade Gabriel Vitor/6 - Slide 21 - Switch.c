#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    char escolha;
    printf("Quer continuar? [sim - s / nao - n]: \n");
    scanf(" %c", &escolha);

    switch (escolha)
    {
    case 's':
        printf("Voce quer continuar");
        break;
    case 'n':
        printf("Voce quer parar");
        break;
    default:
        printf("Escolha invalida");
        break;
    }

    printf("\n\n");

    system("pause");

    return 0;
}