#include <stdio.h>
#include <stdlib.h>

int TempData[50] = {0};

void findMinMax()
{
	int min , max;
	min = max = TempData[0];
	  for( int j=0; j<50; j++ ) 
	   {
			if (min > TempData[j])
				min = TempData[j];
			if (max < TempData[j])
				max = TempData[j];
	   }  
	  printf("\nMinimum Temperature = %d degC, Maximum Temperature = %d degC\n", min, max);
}

static void Avg(int Data[], string entity, string unit)
{
	float Average = 0.0;
	for (int i=0;i<50;i++)
	{
		Average += Data[i];
	}
	Average = Average/50;
	printf("%s Average = %f %s \n", entity, Average, unit);
}


int main() 
{
char TempRead[600];
int i = 0;
string entity, unit;
scanf("%20s", TempRead);
scanf("%20s", TempRead);
scanf("%20s", TempRead);
printf("%20s", TempRead);
	for(i=0;i<50;i++)
	{
		scanf("%d", &TempData[i]);
		//printf("\n%d\n", TempData[i]);
	}

printf("Computing Min and Max\n");
findMinMax();
entity = Temperature, unit = degC;
Avg(TempData, entity, unit);
return 0;
}


