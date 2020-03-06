#include <stdio.h>
#include <string.h>
constexpr auto LC = 100;

char* voltea_cadena(char cadena[]);

int main(void) {
    char C[LC];
    printf("Escribe una cadena y la invertire:\n \n");

    fgets(C, LC-1, stdin);

    printf("\nLa cadena invertida es:\n\n %s\n", voltea_cadena(C));
    return 0;
}

char* voltea_cadena(char cadena[]) {
    int L = strlen(cadena);
    char T;
    for (int i = 0, D = L - 1; i < (L / 2);
        i++, D--) {
        T = cadena[i];
        cadena[i] = cadena[D];
        cadena[D] = T;
    }
    return cadena;
}