#include <stdio.h>
#include <string.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // converte em maiuscula
        }
    }

    printf("String convertida para maiuscula: %s\n", str);

    return 0;
}
