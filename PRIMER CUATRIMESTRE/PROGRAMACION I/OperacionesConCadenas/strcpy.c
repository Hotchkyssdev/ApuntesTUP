/*strcpy(dest, src) – Copia una cadena en otra*/

#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola";
    char destino[20];
    strcpy(destino, origen);
    printf("%s\n", destino); // Imprime: Hola
    return 0;
}
