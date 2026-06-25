#include<stdio.h>
void disp_single_digit_square()
{
    int num,digit,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        if(digit==1||digit==4||digit==9)
        {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);
}
int main()
{
    disp_single_digit_square();
    return 0;
}
