#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO 
// GU3054446
int main()
{
    int i;
    char letra = 'A';
    for (i = 0; i < 26; i++)
    {
        printf(" %c ", letra);
        letra++;
    }

    printf("\n\n");

    system("pause");

    return 0;
}