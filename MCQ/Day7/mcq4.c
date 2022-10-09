//How many times the below loop will run ?
#include <stdio.h>
int main( void )
{
  int value;
  value=0;
  do
  {
    ++value;
    printf("\n %d",value);
    value--;
  }while(value>=0);
  return 0;
}
