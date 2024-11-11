/*************************************
 * Calcula o salário bruto, o salário *
 *  família e o total de vantagens.   *
 *************************************/
void calculoVantagens(float numeroHoras, float salarioHora, int numeroFilhos, float valorPorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens);

/*************************************
 * Calcula as deduções referentes ao  *
 * INSS e IRPF, além do total de      *
 * deduções.                          *
 *************************************/
void calculoDeducoes(float salarioBruto, float taxaIR, float *INSS, float *IRPF, float *Deducoes);
