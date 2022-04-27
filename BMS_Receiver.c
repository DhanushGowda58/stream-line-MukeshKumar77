#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int TempData;
   long int i;
   for( i=1; i<500; i++ ) 
   {
    TempData = getc(stdin);
    putc(TempData,stdout);
   }       
}
