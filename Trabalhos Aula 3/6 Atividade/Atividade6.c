#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *strupr(char *str);
char *strlwr(char *str);

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("\nString com case invertido: %s", str);

    strupr(str);
    printf("\nString convertida para maiusculas: %s\n", str);

    strlwr(str);
    printf("\nString convertida para minusculas: %s\n", str);

    return 0;
}

char *strupr(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
    return str;
}

char *strlwr(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
    return str;
}