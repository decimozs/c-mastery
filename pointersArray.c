#include <stdio.h>

int main(int argc, char **argv){
   // pointers in array
   // array
   int array[10] = {1,2,3,4,5,6,7,8,9,10};

   // use linear loop to print he memory address of each value in the array
   int i;
   for(i = 0; i < 10; i++){
      printf("\nThe memory address of the value %d is: %p", array[i], &array[i]);
   }

   /*
      [Output]
      [Note] - the last element of each memory address is different but with an addition of 4 per each
      its that beacuse the size of an integer type is typically 4 bytes. So in this case 4 multiply to 
      the size of the array which is 10 will be equal to 40 bytes of memory storage.
         Memory Address: 000000449d3ff870
         Memory Address: 000000449d3ff874
         Memory Address: 000000449d3ff878
         Memory Address: 000000449d3ff87c
         Memory Address: 000000449d3ff880
         Memory Address: 000000449d3ff884
         Memory Address: 000000449d3ff888
         Memory Address: 000000449d3ff88c
         Memory Address: 000000449d3ff890
         Memory Address: 000000449d3ff894
   */

   printf("\nThe size of the array in memory storage: %lu bytes", sizeof(array));
  
   /*
         In terms of relation between arrays and pointers, it seems that the array we actually declare
         is totally point to the first element of our array.
   */
   // as an example we can say like this:  
   printf("\nWithout memory address");
   printf("\nPrinting the array while dereferencing: %d", *array); // the output will be 1.
   printf("\nPrinting the array with its index: %d", array[0]); // the output will be 1.

   // in terms of their memory address is also totally equal
   printf("\nWith memory address");
   printf("\nPrinting the array while dereferencing: %p", array); // the output will be the memory address.
   printf("\nPrinting the array with its index: %p", &array[0]); // the output will be the memory address.

   // accesing an element in the array by incrementing the pointer
   printf("\n%p", *(array + 1)); // the output will be 2 because index 0 + 1 will be index 1
   printf("\n%p", *(array + 2)); // the output will be 3 because index 0 + 2 will be index 2

   // changing value in the array with pointers
   *array = 999; // changing the first value of the array from 1 to 999
   *(array + 1) = 888; // changin the second value of the array from 2 to 999
   printf("\nAfter changing the value in the array with pointers: ", array);
   for(i = 0; i < 10; i++){
      printf("\nValue %d = %d", i, array[i]);
   }

   return 0;
}