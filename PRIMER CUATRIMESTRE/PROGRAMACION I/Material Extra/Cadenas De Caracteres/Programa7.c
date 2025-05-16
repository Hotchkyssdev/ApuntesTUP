/*
7) Invertir una Frase
Pedí una frase y mostrar la frase invertida. 
Por ejemplo, si el usuario ingresa "Hola mundo", el programa debe mostrar "odnum aloH".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Eliminar salto de línea si lo hay
    size_t len = strlen(frase);
    if (frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
        len--;
    }

    printf("Frase invertida: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }

    printf("\n");

    return 0;
}
