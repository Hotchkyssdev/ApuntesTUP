/*
3)  Persona más alta
Define una estructura Persona con nombre y altura. Pide los datos de 3 personas 
y muestra cuál es la más alta. En caso de empate, mostrar los nombres de todas las personas más altas.
*/

#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[50];
    float altura;
};

int main() {
    struct Persona personas[3];
    float maxAltura = 0;

    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre de la persona #%d: ", i + 1);
        scanf(" %49[^\n]", personas[i].nombre);

        printf("Ingrese la altura de %s (en metros): ", personas[i].nombre);
        scanf("%f", &personas[i].altura);

        if (personas[i].altura > maxAltura) {
            maxAltura = personas[i].altura;
        }
    }

    printf("\nPersona(s) mas alta(s):\n");
    for (int i = 0; i < 3; i++) {
        if (personas[i].altura == maxAltura) {
            printf("%s con %.2f m\n", personas[i].nombre, personas[i].altura);
        }
    }

    return 0;
}
