#include <stdio.h>
#include <stdlib.h>

int TempData[50] = {0};
static void findMinMax()
{
	long int j = 0;
  	int min, max;
	  min = max = TempData[24];
	  for( j=0; j<50; j++ ) 
	   {
			if (min > TempData[j])
				min = TempData[j];
			if (max < TempData[j])
				max = TempData[j];
	   }  
	  printf("\n Minimum value = %d\n", min);
	  printf("Maximum value = %d\n", max);
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
printf("%20s", TempRead);
	for(i=0;i<50;i++)
	{
		scanf("%d", &TempData[i]);
		printf("\n%d\n", TempData[i]);
	}

printf("Computing Min and Max\n");
findMinMax();
return 0;
}


