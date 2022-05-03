#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char TempData[500];
char TempDataWhtSpac[500];
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
   long int i =0,k=0,m=0;
	int result;
   for( i=0; i<500; i++ ) 
   {
	TempDataWhtSpac[i] = getc(stdin);
	result = isspace(TempDataWhtSpac[i]);
	if ( result == 0)
		for (m=0;m<300;m++)
			TempData[m] = TempDataWhtSpac[i];
   } 

   for( k=0; k<500; k++ ) 
   {
	printf("%c", TempData[k]);
   }	
findMinMax();
}


