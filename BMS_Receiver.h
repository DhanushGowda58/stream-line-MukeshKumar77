#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


#define NUMBERS_OF_READINGS 50
int BMS_Receiver(void); 
float SimMovAvg(int Data[], char *entity, char *unit, int NoOfReadings)
