/*isalnum(caracter) – Es alfanumérico (letra o número)*/

#include <stdio.h>
#include <ctype.h>

int main() {
   char ch = 'a';

   if (isalnum(ch)) {
      printf("The character '%c' is alphanumeric.\n", ch);
   } else {
      printf("The character '%c' is not alphanumeric.\n", ch);
   }
   return 0;
}