#include<stdio.h>
int main(void)
{
  enum colours {RED,BLACK=5,WHITE=5,YELLOW,BLUE,GREY};// enum is allowed to be decalred locally 
  printf("%d %d %d %d",RED,YELLOW,BLUE,GREY);
  return 0;
}
//enum is int internally, first element starts with zero.
//subsequent element increments by 1.
//enum colours {RED,BLACK=5,WHITE=5,YELLOW,BLUE,GREY}; is enum colors {0,5,5,6,7,8}
