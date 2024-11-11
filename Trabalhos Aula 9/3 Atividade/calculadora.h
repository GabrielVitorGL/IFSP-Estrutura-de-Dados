/*************************************
* Estrutura que armazena o último     *
* resultado de uma operação.          *
*************************************/
typedef struct calculadora Calculadora;

/*************************************
* Cria uma nova calculadora e         *
* inicializa o resultado com zero.    *
*************************************/
Calculadora* criaCalculadora();

/*************************************
* Libera a memória alocada para a     *
* calculadora.                       *
*************************************/
void liberaCalculadora(Calculadora* calc);

/*************************************
* Realiza a adição entre dois números *
* e armazena o resultado.             *
*************************************/
void adicao(Calculadora* calc, float a, float b);

/*************************************
* Realiza a subtração entre dois      *
* números e armazena o resultado.     *
*************************************/
void subtracao(Calculadora* calc, float a, float b);

/*************************************
* Realiza a multiplicação entre dois  *
* números e armazena o resultado.     *
*************************************/
void multiplicacao(Calculadora* calc, float a, float b);

/*************************************
* Realiza a divisão entre dois        *
* números e armazena o resultado.     *
*************************************/
void divisao(Calculadora* calc, float a, float b);

/*************************************
* Retorna o resultado da última       *
* operação realizada.                 *
*************************************/
float resultado(Calculadora* calc);
