#include <stdio.h>
#include <string.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main()
{
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove o \n

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strstr(str1, str2) != NULL)
        printf("A segunda string esta contida na primeira\n");
    else
        printf("A segunda string nao esta contida na primeira\n");

    return 0;
}
