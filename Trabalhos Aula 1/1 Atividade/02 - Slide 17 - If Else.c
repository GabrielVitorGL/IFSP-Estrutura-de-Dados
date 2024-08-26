#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int a, b;

    printf("Digite dois numeros: \n");
    scanf(" %d %d", &a, &b);

    if (a == b)
    {
        printf("Os numeros sao iguais \n\n");
    }
    else
    {
        printf("Os numeros sao diferentes \n\n");
    }

    system("pause");

    return 0;
}
