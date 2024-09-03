// programa para buscar uma string dentro de outra, exibindo a posição da memória dos caracteres e a posição da string encontrada
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char string1[100], string2[100];
    int i, j, flag;

    printf("Digite a primeira string: ");
    gets(string1);

    printf("Digite a segunda string: ");
    gets(string2);

    for (i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] == string2[0])
        {
            flag = 1;
            for (j = 0; string2[j] != '\0'; j++)
            {
                if (string1[i + j] != string2[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("String encontrada na posição %d\n", i);
            }
        }
    }

    return 0;
}

