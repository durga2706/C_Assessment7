#include <stdio.h>
void disp_biggest_4digit_div7_9();
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}
void disp_biggest_4digit_div7_9()
{
    int n;
    n=9999;
    while (n>=1000)
    {
        if (n%7==0&&n%9==0)
        {
            printf("%d",n);
            break;
        }
        n--;
    }
}
