#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
    int x=71;
    disp_2digit_odd_sum_tens7(x);
    return 0;
}
void disp_2digit_odd_sum_tens7(int x)
{
    int sum=0;
    while(x<=79)
    {
        sum=sum+x;
        x=x+2;
    }
    printf("%d",sum);
}
