/*isdigit(caracter) – Es dígito (0-9)*/

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("%d\n", isdigit('5')); // 1
    printf("%d\n", isdigit('a')); // 0
    return 0;
}