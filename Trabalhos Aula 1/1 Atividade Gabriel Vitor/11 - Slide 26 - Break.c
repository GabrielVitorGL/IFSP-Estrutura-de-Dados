#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            printf("\n\n\t\t captura de i em: %d \n\n", i);
            break;
            printf("Observe que essa mensagem nao sera impressa!\n");
        }
        printf("Valor de i: %d \n", i);
    }

    printf("\n\n");

    system("pause");

    return 0;
}