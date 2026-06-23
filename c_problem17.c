#include<stdio.h>
void check_prime_and_sum14()
{
    int num,temp,i=1,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    while(temp>0)
    {
        sum=sum+(temp%10);
        temp=temp/10;
    }
    if(count==2 && sum==14)
    {
        printf("Prime & Sum of Digits is 14");
    }
    else if(count!=2 && sum==14)
    {
        printf("Not Prime but Sum of Digits is 14");
    }
    else if(count==2 && sum!=14)
    {
        printf("Prime & Sum of Digits is not 14");
    }
    else
    {
        printf("Not Prime & Sum of Digits is not 14");
    }
}
int main()
{
    check_prime_and_sum14();
    return 0;
}
