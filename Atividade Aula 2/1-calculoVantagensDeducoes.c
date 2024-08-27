#include <stdio.h>

float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, Deducoes;

void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho);
void calculoDeducoes(float taxaIR);

int main(){
    float numeroHoras, salarioHora, valorPorFilho, taxaIR;
    int numeroFilhos;

    printf("Digite o numero de horas trabalhadas: ");
    scanf(" %f", &numeroHoras);
    printf("Digite o salario por hora: ");
    scanf(" %f", &salarioHora);
    printf("Digite o numero de filhos: ");
    scanf(" %d", &numeroFilhos);
    printf("Digite o valor por filho: ");
    scanf(" %f", &valorPorFilho);
    printf("Digite a taxa de IR: ");
    scanf(" %f", &taxaIR);

    calculoVantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho);
    calculoDeducoes(taxaIR);

    printf("\n\nSalario Bruto: %.2f\n", salarioBruto);
    printf("Salario Familia: %.2f\n", salarioFamilia);
    printf("Vantagens: %.2f\n", vantagens);
    printf("INSS: %.2f\n", INSS);
    printf("IRPF: %.2f\n", IRPF);
    printf("Deducoes: %.2f\n", Deducoes);

    return 0;
}

void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho){
    salarioBruto = numeroHoras * salarioHora;
    salarioFamilia = numeroFilhos * valorPorFilho;
    vantagens = salarioBruto + salarioFamilia;
}

void calculoDeducoes(float taxaIR){
    INSS = salarioBruto * 0.08;
    IRPF = salarioBruto * taxaIR;
    Deducoes = INSS + IRPF;
}
