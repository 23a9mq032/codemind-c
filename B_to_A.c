#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    for(n=b;n>=a;n--)
    {
        printf("%d ",n);
    }
}