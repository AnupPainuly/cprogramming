#include<stdio.h>
int x=3;
int main()
{
    int x=4,i;
    for(i=0;i<x;i++)
    {
        int x =0; //the scope of local variable is within the block.
        printf("%d,",x++); //after printing 0 postfix operator is applied. output: 0,0,0,0
    }
    return 0;
}