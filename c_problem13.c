#include <stdio.h>
void disp_reverse_number()
{
    int num,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }
}
int main()
{
    disp_reverse_number();
    return 0;
}
