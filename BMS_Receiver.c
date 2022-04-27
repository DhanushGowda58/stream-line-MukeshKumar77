#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char TempData[500];
   long int i,j,k;
  char min, max;

   for( i=0; i<500; i++ ) 
   {
    TempData[i] = getc(stdin);
   } 

   for( k=0; k<500; k++ ) 
   {
	printf("%c", TempData[k]);
   }	
findMinMax();
}
static void findMinMax()
{
	  min = max = TempData[0];
	  for( j=0; j<500; j++ ) 
	   {
		if (min > TempData[j])
			min = TempData[j];
		if (max < TempData[j])
			max = TempData[j];
	    //putc(TempData[j],stdout);
	   }  
	  printf("\n Minimum value = %c\n", min);
	  printf("Maximum value = %c\n", max);
}
