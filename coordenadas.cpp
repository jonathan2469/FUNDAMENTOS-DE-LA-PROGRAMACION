#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int grados;
    float min, seg, grado1, grado2;
    char lat[6], longi[6], d;

    printf("Latitud: ");
    fgets(lat, 6, stdin);

    printf("  grados: ");
    scanf_s("%d", &grados);

    printf("  minutos: ");
    scanf_s("%f", &min);

    printf("  segundos: ");
    scanf_s("%f", &seg);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    grado1 = grados + (min / 60) + (seg / 3600);

    if (lat == "Sur" || lat == "sur") {
        grado1 = -grado1;
    }

    printf("Longitud: ");
    fgets(longi, 6, stdin);

    printf("  grados: ");
    scanf_s("%d", &grados);

    printf("  minutos: ");
    scanf_s("%f", &min);

    printf("  segundos: ");
    scanf_s("%f", &seg);

    grado2 = grados + (min / 60) + (seg / 3600);



    if (strcmp(lat, "Sur") == 0 || strcmp(lat, "sur") == 0) {
        if (strcmp(longi, "Oeste") == 0 || strcmp(longi, "oeste") == 0) {
            printf("https://maps.google.com/maps/place/-%.15f,-%.15f", grado1, grado2);
        }
        else {
            printf("https://maps.google.com/maps/place/-%.15f,%.15f", grado1, grado2);
        }
    }
    else {
        if (strcmp(longi, "Oeste") == 0 || strcmp(longi, "oeste") == 0) {
            printf("https://maps.google.com/maps/place/%.15f,-%.15f", grado1, grado2);
        }
        else {
            printf("https://maps.google.com/maps/place/%.15f,%.15f", grado1, grado2);
        }
    }


    return 0;
}