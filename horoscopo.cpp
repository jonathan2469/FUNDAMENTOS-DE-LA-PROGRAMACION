#include<iostream>
#include<stdio.h>

int main()
{
    int dia, mes, n;
    char opc, c;
    printf("Ingrese el dia de su cumpleanos\n");
    scanf_s("%d", &dia);
    printf("Ingrese el mes de su cumpleanos para saber su signo zodical y la estacion del año\n");
    scanf_s("%d", &mes);
    switch (mes)
    {
    case 1:
        if (dia >= 20) {
            printf("Acuario\nInvierno");
        }
        else {
            printf("Capricornio\nInvierno");
        }
        break;
    case 2:
        if (dia >= 19) {
            printf("Picis\nInvierno");
        }
        else {
            printf("Acuario\nInvierno");
        }
        break;
    case 3:
        if (dia >= 21, dia >= 20) {
            printf("Aries\nInvierno");
        }
        else {
            printf("Picis\nInvierno");
        }
        break;
    case 4:
        if (dia >= 20) {
            printf("Tauro\nPrimavera");
        }
        else {
            printf("Aries\nInvierno");
        }
        break;
    case 5:
        if (dia >= 21) {
            printf("Geminis\nPrimavera");
        }
        else {
            printf("Tauro\nPrimavera");
        }
        break;
    case 6:
        if (dia >= 21) {
            printf("Cancer\nVerano");
        }
        else {
            printf("Geminis\nPrimavera");
        }
        break;
    case 7:
        if (dia >= 23) {
            printf("Leo\nVerano");
        }
        else {
            printf("Cancer\nVerano");
        }
        break;
    case 8:
        if (dia >= 23) {
            printf("Virgo\nVerano");
        }
        else {
            printf("Leo\nVerano");
        }
        break;
    case 9:
        if (dia >= 23, dia >= 21) {
            printf("Libra\nOtono");
        }
        else {
            printf("Virgo\nVerano");
        }
        break;
    case 10:
        if (dia >= 23) {
            printf("Escorpio\nOtono");
        }
        else {
            printf("Libra\nOtono");
        }
        break;
    case 11:
        if (dia >= 22) {
            printf("Sagitario\nOtono");
        }
        else {
            printf("Escorpio\nOtono");
        }
        break;
    case 12:
        if (dia >= 22, dia >= 21) {
            printf("Capricornio\nInvierno");
        }
        else {
            printf("Sagitario\nOtono");
        }
        break;
    }
    return 0;
}
