#include<stdio.h>
#define greater(a,b) (a>b)?a:b
int main()
{
	int x=3,y=4;
	if(greater(x,y))// if(3>4?3:4) which is true since non zero numbers are true.
		printf("sun");//output will be sun
	else
		printf("beam");
	return 0;
}

