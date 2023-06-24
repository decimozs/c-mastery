#include <stdio.h>

int main(int argc, char *argv[]){
   // array of integers
   int array[] = {1,2,3,4,5,6,7,8,9,10};  // dataType variableName[] = {value}

   // accesing elements
   printf("%d", array[0]); // returns the first value on index zero which is 1
   printf("%d", array[1]); // returns the second value on index zero which is 2
   printf("%d", array[2]); // returns the third value on index zero which is 3

   // changing an array inside the array 
   array[0] = 10;  // arrayVariableName[index of the value you want to change] = the value you want
   printf("\nAfter changing the index 0 value to 10 from 1 %d", array[0]);

   // setting a size of array
   int arraySize[5];
   arraySize[0] = 1;
   arraySize[1] = 2;
   arraySize[2] = 3;
   arraySize[3] = 4;
   arraySize[4] = 5;

   // loop through the array
  int size = sizeof(arraySize) / sizeof(arraySize[0]);
   for(int i = 0; i < size; i++){
      printf("%d\n", arraySize[i]);
   }
   
   return 0;
}