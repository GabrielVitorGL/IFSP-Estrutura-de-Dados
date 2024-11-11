#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

// Definição da struct interna (não exportada)
struct calculadora {
    float ultimoResultado;
};

// Cria uma nova calculadora e inicializa o resultado com zero
Calculadora* criaCalculadora() {
    Calculadora* calc = (Calculadora*) malloc(sizeof(Calculadora));
    if (calc != NULL) {
        calc->ultimoResultado = 0;
    }
    return calc;
}

// Libera a memória alocada para a calculadora
void liberaCalculadora(Calculadora* calc) {
    free(calc);
}

// Realiza a adição entre dois números e armazena o resultado
void adicao(Calculadora* calc, float a, float b) {
    calc->ultimoResultado = a + b;
}

// Realiza a subtração entre dois números e armazena o resultado
void subtracao(Calculadora* calc, float a, float b) {
    calc->ultimoResultado = a - b;
}

// Realiza a multiplicação entre dois números e armazena o resultado
void multiplicacao(Calculadora* calc, float a, float b) {
    calc->ultimoResultado = a * b;
}

// Realiza a divisão entre dois números e armazena o resultado
void divisao(Calculadora* calc, float a, float b) {
    if (b != 0) {
        calc->ultimoResultado = a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
    }
}

// Retorna o resultado da última operação realizada
float resultado(Calculadora* calc) {
    return calc->ultimoResultado;
}
