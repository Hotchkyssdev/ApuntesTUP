/*
Calcular la suma y el promedio de números ingresados. La cantidad de números a ingresar 
no se conoce, pero se sabe que deben pertenecer al rango [0,100]. La carga finaliza 
cuando el usuario ingresa un valor fuera del rango.
*/

#include <stdio.h>

int main() {
    int num, suma = 0, contador = 0;

    while (1) {
        printf("Ingrese un numero fuera del rango para salir): ");
        scanf("%d", &num);
        if (num < 0 || num > 100) {
            break;
        }
        suma += num;
        contador++;
    }
    if (contador > 0) {
        printf("Suma: %d, Promedio: %.2f\n", suma, (float) suma / contador);
    } else {
        printf("No se ingresaron numeros validos.\n");
    }
    return 0;
}




