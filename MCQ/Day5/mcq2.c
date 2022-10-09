#include<stdio.h>
int main(void)
{int val1=0x64;
int val2=064+val1;
int val3=0x72+072+72-val1+val2;
printf("val2=%d val3=%d \n",val2,val3);
return 0;
}
/* 0x64-: a number preceding with 0x or 0X is hexadecimal.
 062-: a number preceding with 0 is octal*/
