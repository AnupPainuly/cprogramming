#include<stdio.h>
int main(void)
{
    register int x=3;
    printf("%p,%x",&x,x); //compiler error since printf is requesting address of register variable x.
    return 0;
}