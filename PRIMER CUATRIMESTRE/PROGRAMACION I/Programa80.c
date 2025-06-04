#include <stdio.h>

int f(int x) {
	if (x > 100) {
		return x - 10;
	} else {
		return f(f(x + 11));
	}
}
int main() {
	int x;
	printf("Ingrese un valor para x: ");
	scanf("%d", &x);
	printf("f(%d) = %d\n", x, f(x));
	return 0;
}

