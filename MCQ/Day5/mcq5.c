#include<stdio.h>
int main(void)
{
  int num1=0,num2=-1,num3=-2,num4=1,ans;
  ans =num1++ && num2++ || ++num4 && num3++;
  printf("\n%d %d %d %d %d",num1,num2,num3,num4,ans);
  return 0;
}
/*
 * num1++             && num2++       \\ ++num4 && num3++
 * num1=0             && expression 
 * num1 incre to 1      not executed
 *                  (F)               \\  num4 incre to 2 && num3=1
 *                                                          num3 incre to -1
 *                  (F)               \\                 (T)
 *                                    (T)
 */
