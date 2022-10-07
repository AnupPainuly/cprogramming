#include<stdio.h>
int main(void)
{
    int a=1;
    int *p = &a;//pointer p decalaration and intialization.
    int *q = p;//pointer q decalaration and intialization.
    *p = *p + *q;
    printf("%d,%d,%d",*p,a,*q);//output: 2,2,2
    return 0;

}