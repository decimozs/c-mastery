#include <stdio.h>

int main(int argc, char **argv){
   // varible of a integer that named x with a value of 10
   int x = 10;
   printf("The value of integer number: %d", x);
   printf("\nThe memory address of the variable number in the memory: %p", &x);

   /*
      a pointer variable which name is ptr, that stores the memory
      address of the variable number.
   */
   int *ptr = &x;
   printf("\nThe memory address of the variable number in the memory with a pointer: %p", ptr);
   
   return 0;
}