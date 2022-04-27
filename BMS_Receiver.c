#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int TempData[100];
   long int i;
  int min, max;
   for( i=0; i<100; i++ ) 
   {
    TempData[i] = getc(stdin); 
    putc(TempData[i],stdout);
   } 
   for( i=0; i<100; i++ ) 
   {       
    min = max = TempData[0];
		if (min > TempData[i])
			min = TempData[i];
		if (max < TempData[i])
			max = TempData[i];
   }
  printf("minimum value = %d\n", min);
  printf("maximum value = %d\n", max);
}
