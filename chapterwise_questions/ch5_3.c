#include<stdio.h>
int main()
{
    int x =3;
    static int y=x; //intializer element is not constant. alternatively static int y=3 is acceptable.
    printf("%d,%d",x,y);
    return 0;
}