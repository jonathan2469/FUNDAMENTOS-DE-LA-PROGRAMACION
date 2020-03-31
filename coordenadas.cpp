#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    //Declaramos nuestras variables
    int grados;
    float min, seg, grado1, grado2;
    char lat[6], longi[6], d;
    printf("Ingrese los datos que se piden:\n");
    printf("Latitud[N/S]: ");
    fgets(lat, 6, stdin);

    printf("  grados[0-90]: ");
    scanf_s("%d", &grados);

    printf("  minutos[0-59]: ");
    scanf_s("%f", &min);

    printf("  segundos[0-59.9]: ");
    scanf_s("%f", &seg);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    grado1 = grados + (min / 60) + (seg / 3600);/*Aqui calculamos la latitud en decimales sumando los los grados dados por el usuario con los minutos
    divididos entre 60 mas los segundos divididos entre 3600*/

    if (lat == "Sur" || lat == "sur") {//En esta condicion solo usamos el if para la latiud sur y la usamos para que los grados se vuelvan negativos
        grado1 = -grado1;
    }

    printf("Longitud[E/O]: ");
    fgets(longi, 6, stdin);

    printf("  grados[0-180]: ");
    scanf_s("%d", &grados);

    printf("  minutos[0-59]: ");
    scanf_s("%f", &min);

    printf("  segundos[0-59.9]: ");
    scanf_s("%f", &seg);

    grado2 = grados + (min / 60) + (seg / 3600); /*Aqui calculamos la longitud en decimales sumando los los grados dados por el usuario con los minutos
    divididos entre 60 mas los segundos divididos entre 3600*/


    //Dentro de estas condicionales declaramos los resultados dependiendo a la longitud y latitud dada de los numeros en decimal con su respectivo link
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