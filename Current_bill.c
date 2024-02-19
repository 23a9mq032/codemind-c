#include<stdio.h>
int main()
{
    int units;
    float charges,total,surcharge=0;
    scanf("%d",&units);
    if(units<=199)
    {
        charges=units*1.20;
    }
    else if(units>=200 && units <400)
    {
        charges=units*1.50;
    }
    else if(units >=400 && units <600)
    {
        charges=units*1.80;
    }
    else
    {
        charges=units*2.00;
    }
    if(charges>400)
    {
        surcharge=charges*0.15;
    }
    else if(charges<400)
    {
        surcharge=100;
    }
    total=charges+surcharge;
    printf("%.2f",total);
}