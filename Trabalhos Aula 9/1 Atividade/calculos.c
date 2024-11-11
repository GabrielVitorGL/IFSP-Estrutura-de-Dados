#include "calculos.h"

void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens) {
    *salarioBruto = numeroHoras * salarioHora;
    *salarioFamilia = numeroFilhos * valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float salarioBruto, float taxaIR, float *INSS, float *IRPF, float *Deducoes) {
    *INSS = salarioBruto * 0.08;
    *IRPF = salarioBruto * taxaIR;
    *Deducoes = *INSS + *IRPF;
}
