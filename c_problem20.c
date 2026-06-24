#include<stdio.h>
void disp_single_digit_prime()
{
    int i=2,count=0;
    while(i<=9)
    {
        if(i==2||i==3||i==5||i==7)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}
int main()
{
    disp_single_digit_prime();
    return 0;
}
