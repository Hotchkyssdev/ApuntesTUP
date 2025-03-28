/*
En un hospital existen 3 áreas: Urgencias, Pediatría y Traumatología. El presupuesto anual 
del hospital se reparte de la siguiente manera: 
Área 
Urgencias 37% 
Pediatría 42% 
Traumatología 21%
Obtener la cantidad de dinero que recibirá cada área para cualquier monto presupuestal.
*/

#include <stdio.h>

int main() {
    float presupuesto;
    printf("Ingrese el presupuesto anual: ");
    scanf("%f", &presupuesto);
    printf("Urgencias: %.2f\n", presupuesto * 0.37);
    printf("Pediatria: %.2f\n", presupuesto * 0.42);
    printf("Traumatologia: %.2f\n", presupuesto * 0.21);
    return 0;
}