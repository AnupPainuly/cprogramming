#include<stdio.h>
int main()
{
    printf("\n%d",__LINE__); // prints the line number.
    printf("\n%s",__DATE__); // prints the line date.
    printf("\n%s",__TIME__); // prints the line time.
    printf("\n%s",__FILE__); // prints the file name.
    return 0;
}