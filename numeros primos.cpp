#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite;
    char c;

    printf("Hasta que numero deseas calcular los numeros primos \n");
    scanf_s("%d", &limite);

    int contador;
    for (contador = 2; contador <= limite; contador++)
    {
        int contador1, es_primo = 1;
        for (contador1 = 2; contador1 < contador; contador1++)
        {
            if (contador % contador1 == 0)
            {
                es_primo = 0;
                break;
            }
        }
        if (es_primo)
            printf("\n\nnumero %d es primo", contador);

    }
}