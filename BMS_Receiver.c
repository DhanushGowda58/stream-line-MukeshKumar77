#include <stdio.h>
#include <stdlib.h>

char TempData[600];

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
	   }  
	  printf("\n Minimum value = %c\n", min);
	  printf("Maximum value = %c\n", max);
}

int main() 
{
//long int i =0;
   //for( i=0; i<15; i++ ) 
   //{
	//TempData[i] = getc(stdin);
	//printf("%c", TempData[i]);
   //} 
scanf("%20s", TempData);
scanf("%20s", TempData);
scanf("%20s", TempData);
scanf("%20s", TempData);
printf("\n%s\n", TempData);
printf("Computing Min and Max\n");
findMinMax();
return 0;
}


