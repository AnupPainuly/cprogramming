#include<stdio.h>
int main =3;
int main()// because of the same name, declaration incompatible with global declaration of int main=3
{
    printf("%o",main);
    return 0;
}