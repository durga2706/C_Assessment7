#include<stdio.h>
void check_prime()
{
    int num,i=1,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<=num)
    {
        if(num%i==0)
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
    check_prime();
    return 0;
}
