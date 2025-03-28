/*
En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un 
Algoritmo que lea los sueldos que cobra cada empleado e informe cuántos empleados 
cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá 
informar el importe que gasta la empresa en sueldos al personal. 
*/

#include <stdio.h>

int main() {
    int sueldo, contador1 = 0, contador2 = 0, total = 0;
    while (1) {
        printf("Ingrese sueldo (fuera de rango para salir): ");
        scanf("%d", &sueldo);
        if (sueldo < 100 || sueldo > 500) {
            break;
        }
        if (sueldo <= 300) {
            contador1++;
        } else {
            contador2++;
        }
        total += sueldo;
    }
    printf("Empleados con sueldo  entre $100 y $300: %d\n", contador1);
    printf("Empleados con sueldo mayor a $300: %d\n", contador2);
    printf("Gasto total en sueldos: $%d\n", total);
    return 0;
}





