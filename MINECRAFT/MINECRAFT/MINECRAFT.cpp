#include <stdio.h>

int main()
{
    int aguante, num_filas, diamantes[1000], acumulado = 0;

    int suma1[600];

    scanf_s("%d", &num_filas);//se pide numero de filas

    printf("Ingrese los diamantes en cada fila");

    for (int i = 0; i < num_filas; i++) //For para pedir los diamantes en cada fila
    {

        scanf_s("%d", &diamantes[i]);

    }

    printf("Ingrese el aguante del pico");

    scanf_s("%d", &aguante); //se pide el aguante del pico

    for (size_t i = 0; i < 600; i++)// for para incializar el arreglo suma en 0
    {

        suma1[i] = 0;

    }

    for (size_t i = 0; i < num_filas; i++)//for para el numero de elemento del array en suma1
    {

        for (int j = 0; j < aguante; j++)//for para que se recorra el arreglo diamantes
        {

            suma1[i] = suma1[i] + diamantes[j + i];//#aguante sumas de 0 + valor de diamantes en j+i posicion (se recorre gracias al +i)que se almacenara en suma1 dependiendo de i

        }

    }
    for (size_t i = 0; i < 600; i++)//for para comparar los valores en suma1
    {
       
        if (suma1[i] > suma1[i + 1] && acumulado < suma1[i + 1]) { //if que recorre el arreglo y compara los valores
            acumulado = suma1[i]; //se asigna a acumulado el valor más alto
        }

    }

    printf("\n\n%d\n\n", acumulado);// se imprime el valor más alto

    return 0;
}
