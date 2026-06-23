#include<stdio.h>
void disp_2digit_ones5(int);
int main()
{
    int x=15;
    disp_2digit_ones5(x);
    return 0;
}
void disp_2digit_ones5(int x)
{
    int sum=0;
    while(x<=95)
    {
        sum=sum+x;
        x=x+10;
    }
    printf("%d",sum);
}
