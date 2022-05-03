#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char TempData[500];
static void findMinMax()
{
	long int j = 0;
  	char min, max;
	  min = max = TempData[24];
	  for( j=24; j<165; j++ ) 
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

int main() 
{
   long int i =0,k=0;
   for( i=0; i<500; i++ ) 
   {
	TempData[i] = getc(stdin);

   } 

   for( k=0; k<500; k++ ) 
   {
	printf("%s", TempData);
   }	
findMinMax();
}


