#include<stdio.h>
int main(void)
{
  enum choice {CH1, CH2, CH3};//declaration of user defined data type enum.
  enum choice ch1, ch2, ch3;//declaraion of variables with data type enum.
  ch1 = CH1;
  ch2 = CH3;
  ch3 = CH2;
  printf("%d, %d, %d, ", ch1, ch2, ch3);
  printf("%d ,%d", sizeof(enum choice), ch2-ch1);//sizeof enum is same as int data type which is 4 bytes.
  return 0;
}
