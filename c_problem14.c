#include <stdio.h>
void disp_interchange_first_last_digit()
{
    int num,first,last,temp,digits=0,power=1,middle,result;
    printf("Enter a number:");
    scanf("%d",&num);
    last=num%10;
    temp=num;
    while(temp>=10)
    {
        temp=temp/10;
        digits++;
        power=power*10;
    }
    first=temp;
    middle=(num % power)/10;
    result=last*power+ middle*10+first;
    printf("Result=%d",result);
}
int main()
{
    disp_interchange_first_last_digit();
    return 0;
}
