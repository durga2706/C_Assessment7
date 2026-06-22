#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
    int x=11;
    disp_2digit_odd_below20(x);
    return 0;
}
void disp_2digit_odd_below20(int x)
{
    while(x<=19)
    {
        printf("%d",x);
        x=x+2;
    }
}
