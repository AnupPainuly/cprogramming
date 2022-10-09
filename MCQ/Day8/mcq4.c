#include<stdio.h>
enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
typedef enum days DAYS;
int main(void)
{
  DAYS d;
  printf("%d,%d,%d,%d,%d,%d,%d",MON,TUE,WED,THU,FRI,SAT,sizeof(DAYS));
  return 0;
}
