/*
Crea un algoritmo que pida al usuario su código de usuario (un número entero) y su 
contraseña numérica (otro número entero), y no le permita seguir hasta que introduzca 
como código 1024 y como contraseña 4567.
*/

#include <stdio.h>

int main() {
    int codigo, password;
    do {
        printf("Ingrese codigo de usuario: ");
        scanf("%d", &codigo);
        printf("Ingrese contrasena: ");            
        scanf("%d", &password);
    } while (codigo != 1024 || password != 4567);
    printf("Acceso concedido.\n");
    return 0;
}





