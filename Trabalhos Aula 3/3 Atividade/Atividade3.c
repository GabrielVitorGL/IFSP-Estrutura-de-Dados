#include <stdio.h>
#include <string.h>
#include <ctype.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    char str[100], consoante;
    int vogais = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite uma consoante: ");
    scanf("%c", &consoante);
    consoante = tolower(consoante);

    for (int i = 0; i < strlen(str); i++)
    {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vogais++;
            str[i] = consoante;
        }
    }

    printf("\nA string possui %d vogais.\n", vogais);
    printf("A string com vogais substituidas fica: %s", str);

    return 0;
}
