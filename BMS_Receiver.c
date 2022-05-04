#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BMS_Receiver.h"

int TempData[NUMBERS_OF_READINGS] = {0};
int SoCData[NUMBERS_OF_READINGS] = {0};

int findMinMax(int Data[], char *entity, char *unit, int NoOfReadings)
{
	int min , max;
	min = max = Data[0];
	  for( int j=0; j<NoOfReadings; j++ ) 
	   {
			if (min > Data[j])
				min = Data[j];
			if (max < Data[j])
				max = Data[j];
	   }  
	  printf("\nMinimum %s = %d %s, Maximum %s = %d %s\n", entity, min, unit, entity, max, unit);
	return max;
}

float Avg(int Data[], char *entity, char *unit, int NoOfReadings)
{
	float Average = 0.0;
	for (int i=0;i<NoOfReadings;i++)
	{
		Average += Data[i];
	}
	Average = Average/NoOfReadings;
	printf("%s Average = %f %s\n", entity, Average, unit);
	return Average;
}

void TempReadConsole(int NoOfReadings)
{
char TempRead[600];
int i = 0;
scanf("%20s", TempRead);
scanf("%20s", TempRead);
scanf("%20s", TempRead);
//printf("%20s", TempRead);
	for(i=0;i<NoOfReadings;i++)
	{
		scanf("%d", &TempData[i]);
		//printf("\n%d\n", TempData[i]);
	}
}

void SoCReadConsole(int NoOfReadings)
{
char SoCRead[600];
int i = 0;
scanf("%20s", SoCRead);
scanf("%20s", SoCRead);
scanf("%20s", SoCRead);
//printf("%20s", SoCRead);
	for(i=0;i<NoOfReadings;i++)
	{
		scanf("%d", &SoCData[i]);
		//printf("\n%d\n", TempData[i]);
	}
}

float SimMovAvg(int Data[], char *entity, char *unit, int NoOfReadings)
{
	float SMA = 0.0;
	for (int k=0; k<(NoOfReadings-4); k++)
		SMA = float (Data[k]+Data[k+1]+Data[k+2]+Data[k+3]+Data[k+4]) / 5;
	printf("Simple Moving Average of %s data = %f %s\n", entity, SMA, unit);
	return SMA;
}

int BMS_Receiver() 
{
int NoOfReadings = NUMBERS_OF_READINGS;
TempReadConsole(int NoOfReadings);
char entity[] = "Temperature";
char unit[] = "degC";
findMinMax(TempData, entity, unit, NoOfReadings);
Avg(TempData, entity, unit, NoOfReadings);
SimMovAvg(TempData, entity, unit, NoOfReadings);
printf("\n===============================================================\n");
SoCReadConsole(NoOfReadings);
char SoCentity[] = "SoC";
char SoCunit[] = "%";
findMinMax(SoCData, SoCentity, SoCunit, NoOfReadings);
Avg(SoCData, SoCentity, SoCunit, NoOfReadings);
SimMovAvg(SoCData, SoCentity, SoCunit, NoOfReadings);
return 0;
}


