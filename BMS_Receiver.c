#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BMS_Receiver.h"

int TempData[NUMBERS_OF_READINGS] = {0};
int SoCData[NUMBERS_OF_READINGS] = {0};

void findMinMax(int Data[], char *entity, char *unit)
{
	int min , max;
	min = max = Data[0];
	  for( int j=0; j<NUMBERS_OF_READINGS; j++ ) 
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
	for (int i=0;i<NUMBERS_OF_READINGS;i++)
	{
		Average += Data[i];
	}
	Average = Average/NUMBERS_OF_READINGS;
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
	for(i=0;i<NUMBERS_OF_READINGS;i++)
	{
		scanf("%d", &TempData[i]);
		//printf("\n%d\n", TempData[i]);
	}
}

void SoCReadConsole()
{
char SoCRead[600];
int i = 0;
scanf("%20s", SoCRead);
scanf("%20s", SoCRead);
scanf("%20s", SoCRead);
//printf("%20s", SoCRead);
	for(i=0;i<NUMBERS_OF_READINGS;i++)
	{
		scanf("%d", &SoCData[i]);
		//printf("\n%d\n", TempData[i]);
	}
}

void SimMovAvg(int Data[], char *entity, char *unit)
{
	float SMA = 0.0;
	for (int k=0; k<(NUMBERS_OF_READINGS-4); k++)
		SMA = float (Data[k]+Data[k+1]+Data[k+2]+Data[k+3]+Data[k+4]) / 5;
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
printf("\n===============================================================\n");
SoCReadConsole();
char SoCentity[] = "SoC";
char SoCunit[] = "%";
findMinMax(SoCData, SoCentity, SoCunit);
Avg(SoCData, SoCentity, SoCunit);
SimMovAvg(SoCData, SoCentity, SoCunit);
return 0;
}


