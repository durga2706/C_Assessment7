#include <stdio.h>
void disp_count_sum14();
int main()
{
    disp_count_sum14();
    return 0;
}
void disp_count_sum14()
{
    int n = 1;
    int temp,rem;
    int sum;
    int count = 0;
    while (n<100000)
    {
        temp=n;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        if(sum==14)
        {
            count=count+1;
        }
        n=n+1;
    }
    printf("%d",count);
}
