#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int TempData[100];
   long int i;
   for( i=0; i<100; i++ ) 
   {
    TempData[i] = getc(stdin);
    putc(TempData[i],stdout);
   }       
  printf("Received data\n");
}
