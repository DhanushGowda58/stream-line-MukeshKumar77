#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int TempData;
   long int i;
   for( i=0; i<500; i++ ) 
   {
    TempData = getc(stdin);
    putc(TempData,stdout);
   }       
}
