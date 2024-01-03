#include <stdio.h>

int main() 
{
    int num,a,b,c;//c-->temporary num
    scanf("%d", &num);
    b = num % 10;
    c = num;
    while (c >= 10) 
    {
        c /= 10;
    }
    a = c;
    int sum = a + b; 
    printf("%d", sum);
}