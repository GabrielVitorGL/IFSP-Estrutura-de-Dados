// Gabriel Vitor Grossi Lourenço
// GU3054446

#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h"

int main()
{
    int TABLE_SIZE;
    int comTratamentoColisao;
    int opcao;
    Hash *ha = NULL;

    printf("----- TABELA HASH -----\n");
    printf("Tamanho da tabela hash: ");
    scanf("%d", &TABLE_SIZE);

    do
    {
        printf("\nEscolha o modo de funcionamento:\n");
        printf("1: Insercao SEM tratamento de colisoes\n");
        printf("2: Insercao COM tratamento de colisoes (Endereco Aberto)\n");
        printf("0: Encerrar programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        case 2:
            comTratamentoColisao = (opcao == 2);
            ha = criaHash(TABLE_SIZE);
            if (ha == NULL)
            {
                printf("Erro ao criar tabela hash.\n");
                return 1;
            }

            menuOperacoes(ha, comTratamentoColisao);
            liberaHash(ha);
            ha = NULL;
            break;

        case 0:
            printf("\nPrograma encerrado.\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
