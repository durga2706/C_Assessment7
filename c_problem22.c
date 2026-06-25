#include<stdio.h>
void disp_total_2digit_odd()
{
    int num,temp,last2,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>=10)
    {
        last2=temp%100;
        if(last2%2!=0)
        {
            count++;
        }
        temp=temp/10;
    }
    printf("%d",count);
}
int main()
{
    disp_total_2digit_odd();
    return 0;
}
