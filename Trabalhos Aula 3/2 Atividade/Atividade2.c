#include <stdio.h>
#include <string.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    char nome[50], sobrenome1[50], sobrenome2[50];
    char nomeCompleto[150];

    printf("Digite o primeiro nome: ");
    gets(nome);

    printf("Digite o primeiro sobrenome: ");
    gets(sobrenome1);

    printf("Digite o segundo sobrenome: ");
    gets(sobrenome2);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome1);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome2);

    printf("\nNome completo: %s\n", nomeCompleto);

    return 0;
}
