#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_READINGS 50
int main()
{
  int RxdSig[NUM_OF_READINGS];
  char str[100];
  gets( str );
  puts( str );
  for (int i=0; i<NUM_OF_READINGS; i++)
  {
    scanf("%d\n",&RxdSig[i]);
  }
  printf("Temperature Data = %d\n", RxdSig[20]);
  return 0;
}
