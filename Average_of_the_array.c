#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum,avg=0;
    for(i=0;i<n;i++)
    {
    sum+=arr[i];
    avg=sum/n;
    }
    printf("%.2f ",avg);
}