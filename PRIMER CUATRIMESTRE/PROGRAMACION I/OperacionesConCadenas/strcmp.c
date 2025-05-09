/*strcmp(s1, s2) – Compara dos cadenas (0 si son iguales)*/
#include <stdio.h>
#include <string.h>

int main() {
    printf("%d\n", strcmp("hola", "hola")); // 0
    printf("%d\n", strcmp("hola", "adios")); // >0
    printf("%d\n", strcmp("adios", "hola")); // <0
    return 0;
}