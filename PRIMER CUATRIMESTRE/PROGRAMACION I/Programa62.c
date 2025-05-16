#include <stdio.h>

int main() {
	struct estructura_amigo {
		char nombre[30];
		char apellido[40];
		char telefono[10];
		int edad;
		int dni;
	};
	
	struct estructura_amigo amigo;
	printf("Escribe el nombre del amigo: ");
	scanf("%s", &amigo.nombre);
	printf("Escribe el apellido del amigo: ");
	scanf("%s", &amigo.apellido);
	printf("Escribe el telefono del amigo: ");
	scanf("%s", &amigo.telefono);
	printf("Ingrese la edad del amigo: ");
	scanf("%d", &amigo.edad);
	printf("Ingrese el dni del amigo: ");
	scanf("%d", &amigo.dni);
	printf("Mi amigo %s %s tiene el telefono %s y su edad es %d y su DNI es %d.\n", amigo.nombre, amigo.apellido, amigo.telefono, amigo.edad, amigo.dni);
	return 0;
}
