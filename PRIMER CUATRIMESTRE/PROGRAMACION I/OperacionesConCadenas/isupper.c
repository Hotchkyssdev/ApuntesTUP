/*isupper(caracter) – Es mayúscula*/

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("%d\n", isupper('A')); // 1
    printf("%d\n", isupper('a')); // 0
    return 0;
}