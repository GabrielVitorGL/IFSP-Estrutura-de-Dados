#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    FILE *arq1, *arq2;
    char texto[100];

    printf("Digite alguma frase para ser salvo em um arquivo txt: ");
    fgets(texto, sizeof(texto), stdin);

    arq1 = fopen("arq1.txt", "w");
    if (arq1 == NULL)
    {
        printf("Erro na abertura do arquivo 1!\n");
        exit(1);
    }
    fputs(texto, arq1);
    fclose(arq1);

    arq2 = fopen("arq2.txt", "w");
    if (arq2 == NULL)
    {
        printf("Erro na abertura do arquivo 2!\n");
        exit(1);
    }
    for (int i = 0; texto[i] != '\0'; i++)
    {
        fputc(toupper(texto[i]), arq2);
    }
    fclose(arq2);

    printf("\nConteúdo do arquivo 1:\n");
    arq1 = fopen("arq1.txt", "r");
    if (arq1 == NULL)
    {
        printf("Erro na leitura do arquivo 1!\n");
        exit(1);
    }
    char c;
    while ((c = fgetc(arq1)) != EOF)
    {
        putchar(c);
    }
    fclose(arq1);

    printf("\n\nConteúdo do arquivo 2:\n");
    arq2 = fopen("arq2.txt", "r");
    if (arq2 == NULL)
    {
        printf("Erro na leitura do arquivo 2!\n");
        exit(1);
    }
    while ((c = fgetc(arq2)) != EOF)
    {
        putchar(c);
    }
    fclose(arq2);

    return 0;
}
