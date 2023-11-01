#include<stdio.h>
int main()
{
    float s,h,d,p,gs;
    scanf("%f%f%f",&s,&h,&d);
    p=(12*s)/100;
    gs=s+h+d+p;
    printf("%.2f
%.2f",p,gs);
}