#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include "BMS_sender.h"
/*void printToConsole(int batteryData[])
{
  int RxdSig[NUMBERS_OF_READINGS];
  for (int i=0; i<NUMBERS_OF_READINGS; i++)
  {
    scanf("%d\n",&RxdSig[i]);
    printf("Temperature Data = %d\n", batteryData[i]);
  }
}*/

int main(int argc, char *argv[]) 
{
   int i;
  argc = 3;
   for( i=0; i<argc; i++ ) 
   {
        printf("%s", argv[i]); //Do whatever you want with argv[i]
   }       
return 0;
}
