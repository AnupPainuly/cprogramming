#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    a++;    //array is a constant pointer and it can not be incremented.
    printf("%d",a[2]);
    return 0;
}
/* Let's declare an array.

int arr[10];
So, when we declare this array, we create the entry into the symbol table and, store the address and the name of the array into the symbol table. let's assume we get address 500 for this variable. Let's see what happens when we want to do something like this :

arr++;
when we increment arr, we want to increment 500, that is not possible and not in our hand, because it has been decided by the computer system, so we can't change it.

instead of doing this we can declare a pointer variable

int * p= &arr;
What happens in this situation is: again an entry is created into the symbol table that stores the name and the address of the pointer variable p. So when we try to increment p by doing p++, we are not changing the value into the symbol table, instead we are changing the value of the address of the pointer variable, that we can do and we are allowed to do.

Also it's very obvious that if we will increment the a the ultimately we are going to loss the address of our array. if we loss the address of array then how will we access the array at a later point ? */