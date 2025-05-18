/*
6) Diccionario reducido
Usar un arreglo de strings ordenado alfabéticamente con 10 palabras. 
Pedir al usuario una palabra y usar búsqueda binaria para saber si existe.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char diccionario[10][20] = {"abeja", "casa", "elefante", "gato", "jirafa", "luna", "mesa", "perro", "raton", "zorro"};
    char palabra[20];
    int n = sizeof(diccionario) / sizeof(diccionario[0]);
    int inicio = 0, fin = n - 1, medio;
    int encontrado = 0;
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (strcmp(diccionario[medio], palabra) == 0) {
            encontrado = 1;
            break;
        } else if (strcmp(diccionario[medio], palabra) < 0) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (encontrado) {
        printf("La palabra '%s' se encuentra en el diccionario.\n", palabra);
    } else {
        printf("La palabra '%s' no se encuentra en el diccionario.\n", palabra);
    }

    return 0;
}
