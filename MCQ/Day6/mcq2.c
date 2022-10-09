#include<stdio.h>
int main(void)
{
  int i=5;
  if(!printf("0"))
    i=3;
  else
    i=5;
  printf("%d",i);
  return 0;
}
/* printf returns the number of characters written to output */
