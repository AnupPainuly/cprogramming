#include<stdio.h>
int main( void )
{
int num1=3,num2=2;
while(num1+num2-1)
{
  printf(" %d ",num1-- +num2);//first assign values to evaluate num1-- +num2 and then incre num1.
}
return 0;
}
/* A. 4 3 2 1
   B. 5 4 3 2
  C. 6 4 2 1
  D. 5 4 3 1
*/
