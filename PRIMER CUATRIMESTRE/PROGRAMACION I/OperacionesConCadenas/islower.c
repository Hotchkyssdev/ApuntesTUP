/*islower(caracter) – Es minúscula*/

#include <stdio.h>
#include <ctype.h>

int main() {
  char c = 'b';
  if (islower(c)) {
    printf("%c is a lowercase letter", c);
  } else {
    printf("%c is not a lowercase letter", c);
  }
  return 0;
}