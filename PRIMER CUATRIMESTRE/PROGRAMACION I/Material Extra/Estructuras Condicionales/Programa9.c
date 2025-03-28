/*
Determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas 
extras trabajadas en una empresa, sabiendo que cuando las horas de trabajo exceden de 
40, el resto se consideran horas extras y que estas se pagan al doble de una hora normal 
cuando no exceden de 8; si las horas extras exceden de 8 se pagan las primeras 8 al doble 
de lo que se pagan las horas normales y el resto al triple.
*/

#include <stdio.h>

int main() {
    int horas;
    float pago;
    printf("Ingrese horas trabajadas y pago por hora: ");
    scanf("%d %f", &horas, &pago);
    if (horas <= 40) {
        printf("Pago total: %.2f\n", horas * pago);
    } else if (horas <= 48) {
        printf("Pago total: %.2f\n", 40 * pago + (horas - 40) * pago * 2);
    } else {
        printf("Pago total: %.2f\n", 40 * pago + 8 * pago * 2 + (horas - 48) * pago * 3);
    }
    return 0;
}


