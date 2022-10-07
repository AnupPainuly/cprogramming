#include<stdio.h>
int sunbeam()
{
    return a*a; //variable is undefined hence compiler error.
}
int main(void)
{
    int a=3;
    printf("%d",sunbeam());
    return 0;
}