#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int Resultado = 0;
    long int Factorial;

    printf("Introduzca No. para calcular el factorial ...: ");
    scanf_s(" %ld", &Factorial);

    Resultado = 1;
    while (Factorial > 1) {
        Resultado *= Factorial;
        Factorial--;
    }
    printf("%ld\n\n", Resultado);

    system("PAUSE");
    return 0;
}