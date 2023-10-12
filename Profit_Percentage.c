#include<stdio.h>
int main()
{
    float X,Y,CP,SP,P,PP;
    scanf("%f%f%f%f",&X,&Y,&CP,&SP);
    CP=X;
    SP=Y;
    P=SP-CP;
    PP=P*100/CP;
    printf("%.2f",PP);
}