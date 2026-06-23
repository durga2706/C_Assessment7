#include<stdio.h>
void check_last_digit_odd()
{
    int num,temp,first,power=1,result;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    if(first%2!=0)
    {
        result=(first-1)*power+(num%power);
        printf("%d",result);
    }
    else
    {
        printf("%d",num);
    }
}

int main()
{
    check_last_digit_odd();
    return 0;
}
