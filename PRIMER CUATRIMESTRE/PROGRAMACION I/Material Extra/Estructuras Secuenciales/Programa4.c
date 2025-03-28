/*
Escriba un algoritmo que dado el número de horas trabajadas por un empleado y el sueldo 
por hora, calcule el sueldo total de ese empleado. Tenga en cuenta que las horas extras se 
pagan el doble.
*/

#include <stdio.h>

int main() {
    float horas, pagoHora, sueldo;
    printf("Ingrese horas trabajadas y sueldo por hora: ");
    scanf("%f %f", &horas, &pagoHora);
    sueldo = (horas > 40) ? (40 * pagoHora + (horas - 40) * pagoHora * 2) : (horas * pagoHora);
    printf("El sueldo total es: %.2f\n", sueldo);
    return 0;
}

