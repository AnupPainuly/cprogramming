#include<stdio.h>
#define max(a,b) (a>b)? a:b
int main()
{
    int x=3,y=4,z;
    z=max(++x, y++);//(++x > y++) ? ++x : y++
    printf("%d,%d,%d",x,y,z);
    return 0;
}