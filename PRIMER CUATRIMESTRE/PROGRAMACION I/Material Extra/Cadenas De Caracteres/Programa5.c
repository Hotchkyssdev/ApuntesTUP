/*
5) Eliminar espacios
Pedí al usuario una frase con espacios y mostrá esa frase sin espacios.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char sinEspacios[200];
    int i;
    int j = 0;

    printf("Ingrese una frase con espacios: ");
    fgets(frase, sizeof(frase), stdin);

    // Eliminar el salto de línea si está presente
    size_t longitud = strlen(frase);
    if (frase[longitud - 1] == '\n') {
        frase[longitud - 1] = '\0';
    }

    // Copiar sólo los caracteres que no son espacios
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            sinEspacios[j] = frase[i];
            j++;
        }
    }

    sinEspacios[j] = '\0'; // Terminar la cadena

    printf("Frase sin espacios: %s\n", sinEspacios);

    return 0;
}
