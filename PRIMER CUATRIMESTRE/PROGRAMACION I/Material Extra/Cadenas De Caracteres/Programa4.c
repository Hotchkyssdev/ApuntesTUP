/*
4) Contador de vocales
Escribí un programa que lea una frase y cuente cuántas vocales tiene.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int contador = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Recorrer la frase y contar vocales
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("La frase tiene %d vocales.\n", contador);
    return 0;
}