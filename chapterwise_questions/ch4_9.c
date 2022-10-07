#include<stdio.h>
void sunbeam(int *p)
{
    ++*p;   // the expression can be simplified as ++(*p).
    //printf("\n%u",p);// precedence of a value at operator(*) and postfix/prefix(++/--) operator is same i.e is 2.
            //the expression is carried out based on associativity, both the operators have associativity right-left.
    *p++;   //the expression can be simplified as *(p++).
    //printf("\n%u",p);
}
int main()
{
    int a=4;
    sunbeam(&a);
    printf("\nvalue =%d",a); //output is 5.
    return 0;
}
/* line 4: value at address in p= 4 and prefix of that is 5. */
/* line 7: postfix operator on the pointer p makes 
the value in pointer(address) increment by scale factor of the pointer(4 bytes). */
