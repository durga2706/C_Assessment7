#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    int x=10;
    disp_2digit_even_sum6(x);
    return 0;
}
void disp_2digit_even_sum6(int x)
{
    int tens,ones;
    while(x<=99)
    {
        tens=x/10;
        ones=x%10;
        if(tens+ones==6)
        {
            printf("%d\n",x);
        }
        x=x+2;
    }
}
