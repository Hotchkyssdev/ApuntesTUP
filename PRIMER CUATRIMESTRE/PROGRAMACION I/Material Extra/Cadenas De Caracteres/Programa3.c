/*
3) Copiar una cadena
Hacé un programa que le pida al usuario una cadena 
y luego la copie en otra variable. Mostrá ambas en pantalla. strcpy(copia, cadena)
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char copia[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    size_t len = strlen(cadena);
    if (cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

    strcpy(copia, cadena);

    printf("Cadena original: %s\n", cadena);
    printf("Cadena copiada: %s\n", copia);

    return 0;
}
