//How many times will SunBeam IT Park be printed in this program?
#include <stdio.h>
int main( void )
{
  int i = 1;
  for ( ; i<1024 ; i <<= 1) // i<<=1 is equivalent to i=i<<1 which is left shift operator i.e multiply by 2 for +ve values.
    printf("\n SunBeam IT Park");
  return 0;
}
/* A. 10
   B. 11
   C. Infinite
   D. The program will show compile-time error */
