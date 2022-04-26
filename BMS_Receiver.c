#include <stdio.h>
#include <stdlib.h>
#include "BMS_sender.h"

int main()
{
  int RxdSig[NUM_OF_READINGS];
  for (int i=0; i<NUM_OF_READINGS; i++)
  {
    scanf("%d\n",&RxdSig[i]);
    printf("Temperature Data = %d\n", TemperatureData[i]);
  }
  return 0;
}
