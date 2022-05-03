#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TempData[50] = {0};

void findMinMax(int Data[], char *entity, char *unit)
{
	int min , max;
	min = max = TempData[0];
	  for( int j=0; j<50; j++ ) 
	   {
			if (min > Data[j])
				min = Data[j];
			if (max < Data[j])
				max = Data[j];
	   }  
	  printf("\nMinimum %s = %d %s, Maximum %s = %d %s\n", entity, min, unit, entity, max, unit);
}

void Avg(int Data[], char *entity, char *unit)
{
	float Average = 0.0;
	for (int i=0;i<50;i++)
	{
		Average += Data[i];
	}
	Average = Average/50;
	printf("%s Average = %f %s\n", entity, Average, unit);
}

void TempReadConsole()
{
char TempRead[600];
int i = 0;
scanf("%20s", TempRead);
scanf("%20s", TempRead);
scanf("%20s", TempRead);
//printf("%20s", TempRead);
	for(i=0;i<50;i++)
	{
		scanf("%d", &TempData[i]);
		//printf("\n%d\n", TempData[i]);
	}
}

void SimMovAvg(int Data[], char *entity, char *unit)
{
	float SMA = 0.0;
	for (int k=0; k<46; k++)
		SMA = float (TempData[k]+TempData[k+1]+TempData[k+2]+TempData[k+3]+TempData[k+4]) / 5;
	printf("Simple Moving Average of %s data = %f %s\n", entity, SMA, unit);
}

int main() 
{
TempReadConsole();
char entity[] = "Temperature";
char unit[] = "degC";
findMinMax(TempData, entity, unit);
Avg(TempData, entity, unit);
SimMovAvg(TempData, entity, unit);
return 0;
}


