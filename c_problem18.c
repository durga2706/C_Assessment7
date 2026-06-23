#include<stdio.h>
void check_first_2digits_prime()
{
    int num,last2,i=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    last2=num%100;3867
    while(i<=last2)
    {
        if(last2%i==0)
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
    check_first_2digits_prime();
    return 0;
}
