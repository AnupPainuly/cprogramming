#include <stdio.h>
int main( void )
{
  int value1 = 4, value2 = 0 ;
  while ( value1 >= 0 )
    {
    if ( value2 == value1 )
      break; //breaks out of while block
    else
      printf ( "%d %d ", value1, value2 ) ;
    ++value2 ;
    --value1 ;
    }
  return 0;
}
