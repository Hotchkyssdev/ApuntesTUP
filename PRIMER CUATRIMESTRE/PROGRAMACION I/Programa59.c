#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char texto1[] = "corta";
	char texto2[] = "mediana";
	char texto3[] = "larguisima";
	strcpy(texto2, texto1);
	printf("%s\n", texto2);
	strcpy(texto2, texto3);
	printf("%s\n", texto2);
	getch();
	return 0;
}
