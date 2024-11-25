#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaLigada.h"

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446

struct aluno coletaDados()
{
    struct aluno novo_aluno;

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &novo_aluno.matricula);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &novo_aluno.n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &novo_aluno.n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &novo_aluno.n3);

    return novo_aluno;
}

int main()
{
    int opcao, matricula;
    Lista *li = cria_lista();
    if (li == NULL)
    {
        abortaPrograma();
        return 1;
    }

    while (1)
    {
        printf("\nEscolha uma opção:\n");
        printf("1. Incluir um elemento de forma ordenada\n");
        printf("2. Buscar um elemento por matrícula\n");
        printf("3. Excluir um elemento de forma ordenada\n");
        printf("4. Encerrar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            struct aluno novo_aluno = coletaDados();
            if (insereOrdenado(li, novo_aluno))
            {
                printf("Aluno inserido com sucesso.\n");
            }
            else
            {
                printf("Falha ao inserir o aluno.\n");
            }
            break;
        }
        case 2:
        {
            printf("Digite a matrícula do aluno a ser buscado: ");
            scanf("%d", &matricula);
            struct aluno aluno_encontrado;
            if (consultaMatricula(li, matricula, &aluno_encontrado))
            {
                printf("Aluno encontrado:\n");
                printf("Matrícula: %d | Nota 1: %.2f | Nota 2: %.2f | Nota 3: %.2f\n",
                       aluno_encontrado.matricula, aluno_encontrado.n1,
                       aluno_encontrado.n2, aluno_encontrado.n3);
            }
            else
            {
                printf("Aluno com matrícula %d não encontrado.\n", matricula);
            }
            break;
        }
        case 3:
        {
            printf("Digite a matrícula do aluno a ser removido: ");
            scanf("%d", &matricula);
            if (removeOrdenado(li, matricula))
            {
                printf("Aluno removido com sucesso.\n");
            }
            else
            {
                printf("Falha ao remover o aluno com matrícula %d.\n", matricula);
            }
            break;
        }
        case 4:
            printf("Encerrando o programa...\n");
            apagaLista(li);
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
