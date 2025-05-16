/*
1) Contador de Caracteres
Escribí un programa en C que le pida al usuario ingresar una palabra o frase 
y luego muestre cuántos caracteres tiene (sin contar el \n). strlen()
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra o frase: ");
    fgets(cadena, sizeof(cadena), stdin); 

    size_t longitud = strlen(cadena);
    if (cadena[longitud - 1] == '\n') {
        longitud--;
    }

    printf("La longitud de la cadena es: %d\n", (int)longitud);
    return 0;
}

