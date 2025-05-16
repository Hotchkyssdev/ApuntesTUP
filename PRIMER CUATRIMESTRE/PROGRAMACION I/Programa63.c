#include <stdio.h>
#define elem 3

int main() {
	struct estructura_amigo {
		char nombre[30];
		char apellido[40];
		char telefono[10];
		int edad;
		int dni;
	};
	
	struct estructura_amigo amigo[elem];
	int i, j;
	int cant = 0;
	int B;
	int encontrado = 0;
	int amigosmayor20 = 0;
	int amigosmenorigual20 = 0;
	int temp;
	int valor;
	int inicio = 0, medio;
	int fin;
	fin = elem;
	
	for (i = 0; i < elem; i++) {
		printf("\nIngrese el dni del amigo: ");
		scanf("%d", &amigo[i].dni);
		printf("Escribe el nombre del amigo: ");
		scanf("%s", &amigo[i].nombre);
		printf("Escribe el apellido del amigo: ");
		scanf("%s", &amigo[i].apellido);
		printf("Escribe el telefono del amigo: ");
		scanf("%s", &amigo[i].telefono);
		cant++;
	}
	
	i = 0;
	printf("\n");
	while (i < elem) {
		printf("Ingrese la edad del amigo: ");
		scanf("%d", &amigo[i].edad);
		if (amigo[i].edad > 20) {
			amigosmayor20++;
		} else {
			amigosmenorigual20++;
		}
		i++;
	}
	
	printf("\nIngrese DNI: ");
	scanf("%d", &B);
	
	for (i = 0; i < elem; i++) {
		if (amigo[i].dni == B) {
			printf("DNI: %d\n", amigo[i].dni);
			printf("Nombre: %s\n", amigo[i].nombre);
			printf("Apellido: %s\n", amigo[i].apellido);
			printf("Telefono: %s\n", amigo[i].telefono);
			printf("Edad: %d\n", amigo[i].edad);
			encontrado = 1;
			break;
		}
	}
	if (!encontrado) {
		printf("No se encontró el DNI.\n");
	}
	
	for (i = 0; i < elem - 1; i++) {
		for (j = 0; j < elem - i - 1; j++) {
			if (amigo[j].dni > amigo[j+1].dni) {
				struct estructura_amigo temp = amigo[j];
				amigo[j] = amigo[j + 1];
				amigo[j + 1] = temp;
			}
		}
	}
	
	printf("\n");
	printf("           Listado de Amigo              \n");
	printf("DNI | Nombre | Apellido | Telefono | Edad\n");
	for (i = 0; i < elem; i++) {
		printf("%d %s %s %s %d.\n", amigo[i].dni, amigo[i].nombre, amigo[i].apellido, amigo[i].telefono, amigo[i].edad);
	}
	printf("\nCantidad de amigos: %d\n", cant);
	printf("Cantidad de amigos mayores a 20 años: %d\n", amigosmayor20);
	printf("Cantidad de amigos menores a 20 años: %d\n", amigosmenorigual20);
	
	printf("\nIngrese un DNI a buscar: ");
	scanf("%d", &valor);
	
	encontrado = 0;
	while (inicio <= fin) {
		medio = (inicio + fin) / 2;
		if(amigo[medio].dni == valor) {
			printf("Valor encontrado en la posicion %d.\n", medio);
			encontrado = 1;
			break;
		} else if (amigo[medio].dni < valor) {
			inicio = medio + 1;
		} else {
			fin = medio - 1;
		}
	}
	if (!encontrado) {
		printf("Valor no encontrado en la estructura.\n");
	}
	return 0;
}
