#include <stdio.h>

int main(int argc, char **argv){
   /**
    * basic format specifiers
    * d% or i% for integer
    * %f for float
    * %lf for double
    * %c for character
    * % for string
    */

   int number = 1;                              // integer
   float floatingNumber = 1.0;                  // float
   double doubleNumber = 1.0000;                // double
   char letter = 'a';                           // letter
   char text[] = "C Programming Language";      // string - array of characters

   printf("%d\n", number);
   printf("%f\n", floatingNumber);
   printf("%lf\n", doubleNumber);
   printf("%c\n", letter);
   printf("%s\n", text);

   return 0;
}