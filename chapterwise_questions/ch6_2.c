#include<stdio.h>
#define print_mul(x,y) printf(#x"*"#y "=%d",x*y) //# operator is used for stringization in preprocessor directives
int main()
{
    int a=3;
    print_mul(a,3); //a*3=9
    return 0;
}