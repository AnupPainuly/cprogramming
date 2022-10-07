#include<stdio.h>>
int sunbeam(int **q)
{
    int a =/*guess the code to get output 9?*/; //
    return a;
}
int main()
{
    int a=3;
    int *p =&a;
    a=sunbeam(&p);
    printf("%d",a);//output: is **q * **q
                    //    *(*100) * *(*100)
                      //      3*3=9
    return 0;
}