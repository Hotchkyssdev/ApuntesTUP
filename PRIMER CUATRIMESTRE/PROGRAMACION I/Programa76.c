#include <stdio.h>
#include <string.h>

int esPalindromo(char str[], int inicio, int fin) {
	if (inicio >= fin) { 
		return 1;
	}
	if (str[inicio] != str[fin]) { 
		return 0;
	}
	return esPalindromo(str, inicio + 1, fin - 1);
}

int main() {
	char cadena[100];
	int esPal;
	printf("Ingrese una cadena: ");
	gets(cadena);

	esPal = esPalindromo(cadena, 0, strlen(cadena) - 1);
	if (esPal) {
		printf("La cadena ES un palindromo.\n");
	} else {
		printf("La cadena NO ES un palindromo.\n");
	}
	return 0;
}

