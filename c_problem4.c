#include<stdio.h>
void disp_rsum(int);
int main()
{
    int x=6;
    disp_rsum(x);
    return 0;
}
void disp_rsum(int x)
{
    int sum=0;
    while(x>=1)
    {
        sum=sum+x;
        x--;
    }
    printf("%d\n",sum);
}
