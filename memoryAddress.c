#include <stdio.h>

int main(int argc, char *argv[]){
   int number = 100;

   printf("The integer value of the number: %d", number);
   /*
      we use theh '%p' format specifier to print the memory addres s or the pointer
      value of the the variable in the memory to allow us to display the
      hexadecimal representation of the memory address.

      while the 'ampersand' in the %number are use to retrieve the address of variable,
      and returns the memory address where the variable is stored
   */
   printf("\nThe memory adress of the integer number: %p", &number);

   return 0;
}