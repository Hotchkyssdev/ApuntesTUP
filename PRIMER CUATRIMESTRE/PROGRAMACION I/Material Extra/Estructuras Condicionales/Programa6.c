/*
Elaborar una solución que permita ingresar un número entero del 1 al 10 y muestre su 
equivalente en números romanos.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d", &num); 
    switch (num) {
    case 1:
        printf("I\n");
        break;
    case 2:
        printf("II\n");
        break;
    case 3:
        printf("III\n");
        break;
    case 4:
        printf("IV\n");
        break;
    case 5:
        printf("V\n");
        break;
    case 6:
        printf("VI\n");
        break;
    case 7:
        printf("VII\n");
        break;
    case 8:
        printf("VIII\n");
        break;
    case 9:
        printf("IX\n");
        break;
    case 10:
        printf("X\n");
        break;
    default:
        printf("Numero fuera de rango.\n");
    }
    return 0;
}