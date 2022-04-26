#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include "BMS_sender.h"
int batteryData[NUMBERS_OF_READINGSi];
int main()
{
  
  int RxdSig[NUMBERS_OF_READINGS];
  for (int i=0; i<NUMBERS_OF_READINGS; i++)
  {
    scanf("%d\n",&RxdSig[i]);
    printf("Temperature Data = %d\n", batteryData[i]);
  }
  return 0;
}
