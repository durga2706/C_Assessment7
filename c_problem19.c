#include<stdio.h>
void middle_2digits_prime()
{
    int num,middle,i=1,count=0;
    printf("Enter a digit number:");
    scanf("%d",&num);
    middle=num/10;
    middle=middle%100;
    while(i<=middle)
    {
        if(middle%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
int main()
{
    middle_2digits_prime();
    return 0;
}
