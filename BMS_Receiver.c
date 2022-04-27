#include <stdio.h>
#include <stdlib.h>

int main() 
{
  long int TempData[500];
   long int i;
  int min = 0, max = 0;
   for( i=0; i<500; i++ ) 
   {
    TempData[i] = getc(stdin); 
	min = max = TempData[0];
	if (min > TempData[i])
		min = TempData[i];
	if (max < TempData[i])
		max = TempData[i];
    putc(TempData[i],stdout);
   }     

  printf("\n Minimum value = %d\n", min);
  printf("Maximum value = %d\n", max);
}
