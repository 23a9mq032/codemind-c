#include<stdio.h>
int main()
{
    int hf,sf,SF;
    scanf("%d%d%d",&hf,&sf,&SF);
    int grade;
    if(hf>50&&sf>60&&SF>100)
    {
        grade=10;
    }
    else if(hf>50&&sf>60)
    {
        grade=9;
    }
    else if(sf>60&&SF>100)
    {
        grade=8;
    }
    else if(hf>50&&SF>100)
    {
        grade=7;
    }
    else if(hf>50||sf>60||SF>100)
    {
        grade=6;
    }
    else
    {
        grade=5;
    }
    printf("%d
",grade);
}