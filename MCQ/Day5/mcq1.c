#include<stdio.h>
int main(void)
{
	int value;
	value=5>8?100:1!=5<=5?200:300;
	printf("value of value:%d",value);
	return 0;
}
/*value=5>8?100:1!=5<=5?200:300;
algorithm of the expression can be written as below
if 5>8 then 100 else if 1!=5<=5 then 200 else 300
now for expression 1!=5<=5 relational less than equal to(<=) has precendence 6 and relational negation has precendence of 7.*/ 

