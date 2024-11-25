#define MAX 100

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
typedef struct aluno
{
    int matricula;
    float n1, n2, n3;
}ALUNO;

typedef struct elemento* Lista;


Lista *cria_lista();

int listaVazia(Lista *li);

int insereFinal(Lista *li, struct aluno al);

int insereInicio(Lista *li, struct aluno al);

int insereOrdenado(Lista *li, struct aluno al);

int removeInicio(Lista *li);

int removeFinal(Lista *li);

int removeOrdenado(Lista *li, int mat);

int consultaPosicao(Lista *li, int pos, struct aluno *al);

int consultaMatricula(Lista *li, int mat, struct aluno *al);

void abortaPrograma();

void apagaLista(Lista *li);

int tamanhoLista(Lista *li);

int listaCheia(Lista *li);