/*
6) Contador de Palabras
Escribí un programa que reciba una oración por teclado y cuente cuántas palabras contiene.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char oracion[200];
    int palabras = 0;
    int enPalabra = 0;

    printf("Ingrese una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);

    // Eliminar el salto de línea si existe
    size_t len = strlen(oracion);
    if (oracion[len - 1] == '\n') {
        oracion[len - 1] = '\0';
    }

    for (int i = 0; oracion[i] != '\0'; i++) {
        if (!isspace(oracion[i])) {
            if (!enPalabra) {
                palabras++;
                enPalabra = 1;
            }
        } else {
            enPalabra = 0;
        }
    }

    printf("La oracion contiene %d palabra(s).\n", palabras);

    return 0;
}
