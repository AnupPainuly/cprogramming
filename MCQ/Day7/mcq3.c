//What's going to happen when we compile and run the following C program?
#include <stdio.h>
int main( void )
{
int value = 0;
for ( ; value < 7 ; )// two semicolons means empty statements which are redundant
  {
    if (value < 7)
    {
      printf("Sun");
      ++value;
    } //end of if
    else
      continue;// else block never triggers
    printf("Beam");
  }//end of for 
return 0;
}
