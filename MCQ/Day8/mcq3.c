#include<stdio.h>
int main(void)
{
  typedef int double_new;//  typedef <existing_name> <alias_name>  
  typedef double_new double_old;
  double_old new=1111; //equivalent to int new
  double_new old=2222;//equivalent to int old
  printf("%d",old-new);
  return 0;
}
