/*
2) Ingresar una cadena por teclado, se pide mostrar la cadena, mostrar la cadena al reves, indicar cuantas veces aparece una vocal que se ingresa por teclado, indicar cuantas veces aparece la siguiente secuencia de caracteres (ca)

Indicar si la cadena es un palindromo

Usar las funciones de string que considere necesaria
*/

#include <stdio.h>
#include <string.h>

char minuscula(char caracter) {
	if (caracter >= 'A' && caracter <= 'Z') {
		return caracter + 32;
	}
	return caracter;
} 

void mostrarCadena(char cadena[]) {
	printf("\nCadena ingresada: %s\n", cadena);
}
	
void mostrarCadenaReversa(char cadena[]) {
	int len = strlen(cadena);
	int i;
	printf("\nCadena al reves: ");
	for (i = len - 1; i >= 0; i--) {
		printf("%c", cadena[i]);
	}
	printf("\n");
}

int contarVocal(char cadena[], char vocal) {
	int contador = 0;
	int i;
	for (i = 0; cadena[i] != '\0'; i++) {
		if (minuscula(cadena[i]) == minuscula(vocal)) {
			contador++;
		}
	}
	return contador;
}

int contarSubcadena(char cadena[], char subcadena[]) {
	int i, j, contador = 0;
	int lenCadena = strlen(cadena);
	int lenSubCadena = strlen(subcadena);
	int encontrado;
	
	for (i = 0; i <= lenCadena - lenSubCadena; i++) {
		encontrado = 1;
		for (j = 0; j < lenSubCadena; j++) {
			if (cadena[i + j] != subcadena[j]) {
				encontrado = 0;
				break;
			}
		}
		if (encontrado == 1) {
			contador++;
		}
	}
	
	return contador;
}

int esPalindromo(char cadena[]) {
	char limpio[100];
	char c;
	int i, j = 0;
	int len;
	
	for (i = 0; cadena[i] != '\0'; i++) {
		c = minuscula(cadena[i]);
		if (c != ' ') {
			limpio[j++] = c;
		}
	}
	limpio[j] = '\0';
	
	len = strlen(limpio);
	for (i = 0; i < len / 2; i++) {
		if (limpio[i] != limpio[len - 1 - i]) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	char cadena[100];
	char vocal;
	char secuencia[100];
	int totalvocal;
	int totalsecuencia;
	
	printf("Ingrese una cadena: ");
	fgets(cadena, 100, stdin);
	cadena[strcspn(cadena, "\n")] = 0;
	
	mostrarCadena(cadena);
	mostrarCadenaReversa(cadena);
	
	printf("\nIngrese una vocal para contar: ");
	scanf(" %c", &vocal);
	
	totalvocal = contarVocal(cadena, vocal);
	printf("La vocal '%c' aparece %d veces.\n", vocal, totalvocal);
	
	getchar();

	printf("\nIngrese una secuencia de caracteres a buscar: ");
	scanf("%[^\n]", secuencia);
	
	totalsecuencia = contarSubcadena(cadena, secuencia);
	printf("La secuencia \"%s\" aparece %d veces.\n", secuencia, totalsecuencia);
	
	if (esPalindromo(cadena)) {
		printf("\nLa cadena ES un palindromo.\n");
	} else {
		printf("\nLa cadena NO es un palindromo.\n");
	}
	
	return 0;
}
