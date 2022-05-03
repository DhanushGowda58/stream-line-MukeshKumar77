#include <stdio.h>
#include <stdlib.h>

int TempData[50] = {0};
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

char TempRead[600];
int i = 0;
scanf("%20s", TempRead);
scanf("%20s", TempRead);
scanf("%20s", TempRead);
scanf("%20s", TempRead);
	for(i=0;i<3;i++)
	{
		scanf("%d", &TempData[i]);
		printf("\n%d\n", TempData[i]);
	}

printf("Computing Min and Max\n");
findMinMax();
return 0;
}


