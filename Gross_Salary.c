#include<stdio.h>
int main()
{
    float BS,DA,HRA,GS;
    scanf("%f",&BS);
    if(BS<=10000)
    {
        DA=0.8*BS;
        HRA=0.2*BS;
    }
    else if(BS<=20000)
    {
        DA=0.9*BS;
        HRA=0.25*BS;
    }
    else
    {
        DA=0.95*BS;
        HRA=0.3*BS;
    }
    GS=BS+DA+HRA;
    printf("%.2f
",GS);
}