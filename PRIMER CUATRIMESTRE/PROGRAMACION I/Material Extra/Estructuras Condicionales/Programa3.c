/*
Solicitar la edad de dos hermanos, mostrando un mensaje que informe la edad del mayor 
y cuántos años de diferencia tiene con el menor.
*/

#include <stdio.h>

int main() {
    int edad1, edad2;
    printf("Ingrese la edad de los dos hermanos: ");
    scanf("%d %d", &edad1, &edad2);
    if (edad1 > edad2) {
        printf("El mayor tiene %d anios y la diferencia es de %d anios\n", edad1, edad1 - edad2);
    } else {
        printf("El mayor tiene %d anios y la diferencia es de %d anios\n", edad2, edad2 - edad1);
    }
    return 0;
}
