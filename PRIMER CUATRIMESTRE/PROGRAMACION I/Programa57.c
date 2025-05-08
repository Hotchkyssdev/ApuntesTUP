#include <stdio.h>

int main() {
	int Arreglo[10];
	int i = 0, errores = 0, repeticiones = 0;
	int num;
	char cadena[11];
	int total_vocales = 0, a = 0, e = 0, i_v = 0, o = 0, u = 0;
	
	printf("Carga 10 numeros enteros entre 1 y 10:\n");
	while (i < 10) {
		printf("Numero [%d]: ", i+1);
		scanf("%d", &num);
		if (num < 1 || num > 10) {
			errores++;
			repeticiones++;
			printf("Numero fuera de rango. Intente de nuevo:\n");
			if (repeticiones == 3) {
				printf("Se ingreso 3 veces mal. Se asignara automaticamente el valor 1.\n");
				Arreglo[i] = 1;
				i++;
				repeticiones = 0;
			}
		} else {
			Arreglo[i] = num;
			i++;
			repeticiones = 0;
		}
	}
	
	printf("\nArreglo Cargado:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", Arreglo[i]);
	}
	printf("Cantidad de entradas invalidas: %d\n", errores);
	
	for (i = 0; i < 10; i++) {
		switch(Arreglo[i]) {
			case 1:
				cadena[i] = 'A';
				break;
			case 2:
				cadena[i] = 'E';
				break;
			case 3:
				cadena[i] = 'I';
				break;
			case 4:
				cadena[i] = 'O';
				break;
			case 5:
				cadena[i] = 'U';
				break;
			default:
				cadena[i] = ' ';
				break;
		}
	}
	cadena[10] = '\0';
	printf("\nCadena Generada: %s\n", cadena);
	
	for (i = 0; i < 10; i++) {
		switch(cadena[i]) {
			case 'A':
				a++;
				total_vocales++;
				break;
			case 'E':
				e++;
				total_vocales++;
				break;
			case 'I':
				i_v++;
				total_vocales++;
				break;
			case 'O':
				o++;
				total_vocales++;
				break;
			case 'U':
				u++;
				total_vocales++;
				break;
		}
	}
		
	if (total_vocales > 1) {
		printf("\nTotal de vocales: %d\n", total_vocales);
		printf("A: %d\n", a);
		printf("E: %d\n", e);
		printf("I: %d\n", i_v);
		printf("O: %d\n", o);
		printf("U: %d\n", u);
	} else {
		printf("\nNo se cargaron suficientes vocales o la cadena esta vacia.\n");
	}
	return 0;
}
