#include<stdio.h>
int main(void)
{
    int a[3]={1,2,3};
    printf("%d",a[a[1]]); //additionally if a[a[2]] is printed it will print garbage value. 
                        //since we are trying to access 4th element.
    return 0;
}