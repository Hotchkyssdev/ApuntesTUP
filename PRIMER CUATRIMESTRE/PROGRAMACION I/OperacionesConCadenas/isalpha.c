/*isalpha(caracter) – Es letra (a-z o A-Z)*/

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("%d\n", isalpha('B')); // 1
    printf("%d\n", isalpha('9')); // 0
    return 0;
}