/*

O objetivo agora é substituir variáveis globais por ponteiros.
• Reescreva o programa da atividade 1, e agora não utilize mais variáveis globais, utilize 
somente variáveis locais e a passagem por referência nos dois módulos. Todas as variáveis 
devem ser declaradas dentro do main(), e somente as variáveis que receberão valores dentro 
das funções (que receberão atribuições, ou seja, o resultado dos cálculos), deverão ter seus 
endereços passados por referência. As demais variáveis que só entregam valores para cálculo, 
devem ter sua passagem de forma normal, ou seja, por cópia. 
• Entregue no Moodle com atividade 2.

Módulo calculoVantagens(parâmetros para cálculo)
    salarioBruto = numeroHoras * salarioHora;
    salarioFamilia = numeroFilhos * valorPorFilho;
    vantagens = salarioBruto + salarioFamilia;
fim cálculoVantagens

Módulo calculoDeduções(parâmetros para cálculo)
    INSS = salarioBruto * 0,08;
    IRPF = salarioBruto * taxaIR;
    Deduções = INSS + IPRF;
fim cálculoDeduções

*/

#include <stdio.h>

void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens);
void calculoDeducoes(float salarioBruto, float taxaIR, float *INSS, float *IRPF, float *Deducoes);

int main(){
    float numeroHoras, salarioHora, valorPorFilho, taxaIR;
    int numeroFilhos;
    float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, Deducoes;

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

    calculoVantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho, &salarioBruto, &salarioFamilia, &vantagens);
    calculoDeducoes(salarioBruto, taxaIR, &INSS, &IRPF, &Deducoes);

    printf("\n\nSalario Bruto: %.2f\n", salarioBruto);
    printf("Salario Familia: %.2f\n", salarioFamilia);
    printf("Vantagens: %.2f\n", vantagens);
    printf("INSS: %.2f\n", INSS);
    printf("IRPF: %.2f\n", IRPF);
    printf("Deducoes: %.2f\n", Deducoes);

    return 0;
}

void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens){
    *salarioBruto = numeroHoras * salarioHora;
    *salarioFamilia = numeroFilhos * valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float salarioBruto, float taxaIR, float *INSS, float *IRPF, float *Deducoes){
    *INSS = salarioBruto * 0.08;
    *IRPF = salarioBruto * taxaIR;
    *Deducoes = *INSS + *IRPF;
}