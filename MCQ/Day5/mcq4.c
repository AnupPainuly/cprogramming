#include<stdio.h>
int main(void)
{
  int num1,num2,num3;
  num1=144;
  num2=156;
  num3=printf("%10d",++num1)+ ++num2;
  printf(" %d",num3);
  return 0;
}
/* printf returns the number of characters written on output,
 * hence printf("%10d",++num1) will return 10. */
