#include <stdio.h>
#include <stdlib.h>
char TempData[500];

static void findMinMax()
{
	long int j;
  	char min, max;
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

int main() 
{
   long int i,k;
   for( i=0; i<500; i++ ) 
   {
	TempData[i] = getch(stdin);
   } 

   for( k=0; k<500; k++ ) 
   {
	printf("%c", TempData[k]);
   }	
findMinMax();
}


