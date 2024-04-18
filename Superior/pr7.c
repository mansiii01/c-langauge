#include <stdio.h>

int main() {
   int array[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int loop, l, s;

   if(array[0] > array[1]) {
      l = array[0];
      s  = array[1];
   } else {
      l = array[1];
      s  = array[0];
   }

   for(loop = 2; loop < 10; loop++) {
      if( l < array[loop] ) {
         s = l;
         l = array[loop];
      } else if( s < array[loop] ) {
         s =  array[loop];
      }
   }

   printf(" Second largest - %d \n", s);   


}
 