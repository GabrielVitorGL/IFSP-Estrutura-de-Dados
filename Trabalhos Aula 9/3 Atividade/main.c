#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

void exibirMenu() {
    printf("\n**************** Calculadora *************\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Ver último resultado\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Calculadora* calc = criaCalculadora();
    int opcao;
    float a, b;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois números para adição: ");
                scanf("%f %f", &a, &b);
                adicao(calc, a, b);
                printf("Resultado: %.2f\n", resultado(calc));
                break;
            case 2:
                printf("Digite dois números para subtração: ");
                scanf("%f %f", &a, &b);
                subtracao(calc, a, b);
                printf("Resultado: %.2f\n", resultado(calc));
                break;
            case 3:
                printf("Digite dois números para multiplicação: ");
                scanf("%f %f", &a, &b);
                multiplicacao(calc, a, b);
                printf("Resultado: %.2f\n", resultado(calc));
                break;
            case 4:
                printf("Digite dois números para divisão: ");
                scanf("%f %f", &a, &b);
                divisao(calc, a, b);
                if (b != 0) {
                    printf("Resultado: %.2f\n", resultado(calc));
                }
                break;
            case 5:
                printf("Último resultado: %.2f\n", resultado(calc));
                break;
            case 6:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);

    liberaCalculadora(calc);
    return 0;
}
