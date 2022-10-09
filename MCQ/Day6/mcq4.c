#include<stdio.h>
int main( void )
{
int x=101,y=202;
if(!(!x)&& x)//! operator has higher precedence than && hence l.h.s of && is carried out completely first.
printf("inside if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 1st netsed if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 2ed netsed if x=%d\n",x);
else
printf("inside else y=%d\n",y);
return 0;
}
