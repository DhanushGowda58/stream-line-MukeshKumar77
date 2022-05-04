#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


#define NUMBERS_OF_READINGS 50
int BMS_Receiver(void); 
int findMinMax(int Data[], char *entity, char *unit, int NoOfReadings);
float SimMovAvg(int Data[], char *entity, char *unit, int NoOfReadings);
