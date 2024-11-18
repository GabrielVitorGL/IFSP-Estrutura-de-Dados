#define MAX 100

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446

typedef struct aluno
{
    int matricula;
    float n1, n2, n3;
} ALUNO;

typedef struct fila FILA;

FILA *criaFila();

void liberaFila(FILA *fi);

int tamanhoFila(FILA *fi);

void abortaPrograma();

int filaCheia(FILA *fi);

int filaVazia(FILA *fi);

int insereFila(FILA *fi, ALUNO al);

int removeFila(FILA *fi);

int consultaFila(FILA *fi, ALUNO *al);