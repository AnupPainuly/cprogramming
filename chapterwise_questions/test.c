#include<stdio.h>
int main()
{
    int i,n,a,b,ans;
    a=0;
    b=1;
    printf("\n enter the number elements in sequence: ");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=0;i<=n-2;i++)
    {
        ans=a+b;
        printf("%d",ans);
        a=b;
        b=ans;
    }
    return 0;
}

//ga;g;aga;g