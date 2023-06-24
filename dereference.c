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
   int* ptr = &x;
   printf("\nThe memory address of the variable number in the memory with a pointer: %p", ptr);

   /*
      dereferencing the value of the pointers, by means we can get the actual value of the 
      pointer by using the asterisk '*'.

      [GOOD TO KNOW]
      things here are confusing, always remember that there are two ways to declare pointer 
      variables in c.

      first way:
         int* ptr = &x;
      
      second way:
         int *ptr = &x;

      [NOTE]
      in terms of deferefencing, we can use the example in this code which is how we print the
      value of a pointer which is we use dont use asterisk '*' on the pointer variable.

      pointers like this :
         printf("\nThe memory address of the variable number in the memory with a pointer: %p", ptr);
      
      while in deferencing we use to add asterisk '*' to dereference the value and retrieve it from the pointer variable.

      deferencing like this:
         printf("\nThe memory address of the variable number in the memory with a pointer: %p", *ptr);

   */
   printf("\nAfter deferencing we can retrieve the value of the pointer which is: %d", *ptr);

   return 0;
}