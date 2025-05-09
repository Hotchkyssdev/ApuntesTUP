/*strcat(dest, src) – Concatena dos cadenas*/

#include <stdio.h>
#include <string.h>

int main() {
    char saludo[20] = "Hola ";
    char nombre[] = "Mundo";
    strcat(saludo, nombre);
    printf("%s\n", saludo); // Imprime: Hola Mundo
    return 0;
}
