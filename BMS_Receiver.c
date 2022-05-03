#include <stdio.h>
#include <stdlib.h>

char TempData[600];

static void findMinMax()
{
	long int j = 0;
  	int min, max;
	  min = max = TempData[24];
	  for( j=24; j<165; j++ ) 
	   {
		if (TempData[i] != ' ')
		{
			if (min > TempData[j])
				min = TempData[j];
			if (max < TempData[j])
				max = TempData[j];
		}
	   }  
	  printf("\n Minimum value = %c\n", min);
	  printf("Maximum value = %c\n", max);
}

int main() 
{
long int i =0;
   for( i=0; i<165; i++ ) 
   {
	TempData[i] = getc(stdin);
	printf("%c", TempData[i]);
   } 

printf("Computing Min and Max\n");
findMinMax();
return 0;
}


