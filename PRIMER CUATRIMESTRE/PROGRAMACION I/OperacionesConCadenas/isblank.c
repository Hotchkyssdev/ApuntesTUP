/*isblank(caracter) – Es espacio o tabulación*/

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("%d\n", isblank(' '));  // 1
    printf("%d\n", isblank('\t')); // 1
    printf("%d\n", isblank('A'));  // 0
    return 0;
}
