#include<stdio.h>
int main(void)
{
  char check='a';
  again: //goto label is terminated with colon
  if(check)//condition will be true since check has ascii value(97) of a which is non zero.
  {
    switch(check)
    {
      case ('a' == 'b' || 1): printf("PG-DAC");break;// the case will execute only if the condition will result in 97.
      case (0 && 'b' == 'a'): printf("PG-DMC");break;
      default:printf("PG-DITISS");break;//it allowed to not end default statement with break.
    }
  }
  else
    goto again;
  return 0;
}
