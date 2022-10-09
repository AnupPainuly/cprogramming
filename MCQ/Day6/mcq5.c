//What value of c will get printed
#include <stdio.h>
int main(void)
{
int a,b,c;
a=printf("\nPG-DITISS");
b=printf("\nPG-DMC");
c=printf("\nPG-DBDA [%d]",a )+ ++b; 
printf(" %d",c);
return 0;
}
