#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
    int x=11;
    disp_2digit_odd_sum7(x);
    return 0;
}
void disp_2digit_odd_sum7(int x)
{
    int tens,ones;
    while(x<=99)
    {
        tens=x/10;
        ones=x%10;
        if(tens+ones==7)
        {
            printf("%d\n",x);
        }
        x=x+2;
    }
}
