#include <stdio.h>
#include <stdlib.h>

int main() 
{
  long int TempData[500] = {0};
   long int i,j,k;
  int min = 0, max = 0;

   for( i=0; i<500; i++ ) 
   {
    TempData[i] = getc(stdin); 
   } 
  min = max = TempData[0];
   for( j=0; j<500; j++ ) 
   {
	if (min > TempData[j])
		min = TempData[j];
	if (max < TempData[j])
		max = TempData[j];
    putc(TempData[j],stdout);
   }  
  printf("\n Minimum value = %d\n", min);
  printf("Maximum value = %d\n", max);
   for( k=0; k<500; k++ ) 
   {
	printf("%c\n", TempData[k]);
   }
}
