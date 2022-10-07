#include<stdio.h>
extern int x;
int main()
{
    printf("%d",x); //global variable are intialized with zero value.
    return 0;
}
int x;