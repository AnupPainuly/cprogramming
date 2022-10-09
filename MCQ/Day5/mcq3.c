#include<stdio.h>
int main(void)
{
  int var1=100,var2=200;
  var2-=var1--;
  printf("var2=%d,var1=%d",var2,var1);
  return 0;
}
/*
  var2-=var1--; is equivalent to var2 = var2-var1(before decrememt)*/
