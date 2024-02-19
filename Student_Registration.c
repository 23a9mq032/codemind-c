#include<stdio.h>
int main()
{
    int T;
    scanf("%d ",&T);
    while(T--)
    {
        int N,M,K;
        scanf("%d %d %d",&N,&M,&K);
        if(N<=M-K)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}