#include<stdio.h>
void disp_odd(int);
int main()
{
    int x=1;
    disp_odd(x);
    return 0;
}
void disp_odd(int x)
{
    while(x<=9)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
        x++;
    }
}
