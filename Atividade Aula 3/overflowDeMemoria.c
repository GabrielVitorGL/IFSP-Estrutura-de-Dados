#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    int array[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 1000; i++)
    {
        printf("array[%d] = %02x\n", i, array[i]);
    }

    return 0;
}