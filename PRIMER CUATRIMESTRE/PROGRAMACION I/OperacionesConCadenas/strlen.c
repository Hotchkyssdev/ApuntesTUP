/*strlen(cadena) – Longitud de una cadena (sin contar '\0')*/

#include <stdio.h>
#include <string.h>

int main() {
    printf("Longitud: %lu\n", (unsigned long) strlen("Hola"));
    return 0;
}