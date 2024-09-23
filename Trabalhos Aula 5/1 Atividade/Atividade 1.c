#include <stdio.h>
#include <stdlib.h>

// GABRIEL VITOR GROSSI LOURENÇO
// GU3054446
void soma_100(int *p1, int *p2, int *p3);

int main()
{
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Digite o valor de a: ");
    scanf(" %d", &a);
    printf("Digite o valor de b: ");
    scanf(" %d", &b);
    printf("Digite o valor de c: ");
    scanf(" %d", &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    soma_100(p1, p2, p3);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c: %d\n", c);

    printf("\n\n");

    system("pause");

    return 0;
}

void soma_100(int *p1, int *p2, int *p3)
{
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}