/*strstr(cadena, subcadena) – Busca una subcadena*/

#include <stdio.h>
#include <string.h>

int main() {
    char *ptr = strstr("Hola mundo", "mun");
    if (ptr)
        printf("Subcadena: %s\n", ptr); 
    return 0;
}

