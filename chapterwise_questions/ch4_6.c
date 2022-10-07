#include<stdio.h>
int main()
{
    int a=1;
    printf("%d,",++a);
    main(); //main function is called recursively but without a terminating condition.
            //the output will be 2,2,2,2,.... and stack overflow.
    return 0;
}