#include <stdio.h>
#include <stdlib.h>
#include "PTcart.h"

int main() {
    float d = 0, retornax, retornay;
    PTcart* p = NULL;
    PTcart* q = NULL;

    // Cria dois pontos no plano cartesiano
    p = criaPTcart(10, 21);
    q = criaPTcart(7, 25);

    // Calcula a distância entre os dois pontos
    d = distanciaPTcart(p, q);
    printf("Distancia entre os pontos cartesianos: %f\n", d);

    // Atribui novos valores para o ponto q
    atribuiPTcart(q, 15, -2);
    d = distanciaPTcart(p, q);
    printf("Nova distancia entre os pontos cartesianos: %f\n", d);

    // Acessa os valores de p e q
    acessaPTcart(p, &retornax, &retornay);
    printf("Valores armazenados em p: X = %.2f e Y = %.2f\n", retornax, retornay);
    
    acessaPTcart(q, &retornax, &retornay);
    printf("Valores armazenados em q: X = %.2f e Y = %.2f\n", retornax, retornay);

    // Libera a memória dos pontos criados
    liberaPTcart(p);
    liberaPTcart(q);

    return 0;
}
