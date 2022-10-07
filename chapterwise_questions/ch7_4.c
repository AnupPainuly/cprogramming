#include<stdio.h>
int main(void)
{
    int a[]={1,2,3};
    f(a);
    return 0;
}
int f(int a[])
{
    ++a; // Pointer not array
    printf("%d",a[-1]);
    return 0;
}