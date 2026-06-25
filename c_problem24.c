#include<stdio.h>
void disp_two_digit_square()
{
    int num,digit,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%100;
        if(digit==16||digit==25||digit==36 ||digit==49||digit==64||digit==81)
        {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);
}
int main()
{
    disp_two_digit_square();
    return 0;
}
