#include<stdio.h>
int main(void)
{
  enum colors{RED=0,BLUE,GREEN,YELLOW};
  enum location{MARKETYARD=-1,HINJAWADI,KARAD,SATARA};
  enum colors clr=RED;//decalaration and intialization of already decalared varible enum colors.
  enum location lct=HINJAWADI;
  if(clr==lct)//0==0
    printf("True");
  else
  printf("False");
return 0;
}
