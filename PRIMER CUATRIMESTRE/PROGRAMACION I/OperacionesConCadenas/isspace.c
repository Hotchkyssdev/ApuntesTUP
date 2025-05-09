/*isspace(caracter) – Es un espacio en blanco (espacio, tab, salto de línea…)*/

#include <stdio.h>
#include <ctype.h>

int main() {
  char c = ' ';
  if (isspace(c)) {
    printf("%c is whitespace", c);
  } else {
    printf("%c is not whitespace", c);
  }
  return 0;
}
