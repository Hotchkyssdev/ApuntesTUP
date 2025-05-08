#include <stdio.h>
#include <string.h>

int main() {
	char texto1[] = "Gersom";
	char texto2[] = " y ";
	char texto3[] = "Nacho";
	printf("%s\n", texto1);
	strcat(texto1, texto2);
	printf("%s\n", texto1);
	strcat(texto1, texto3);
	printf("%s\n", texto1);
	getch();
	return 0;
}
