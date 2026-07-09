#include<stdio.h>
void disp_LCM3();
int main()
{
    disp_LCM3();
    return 0;
}
void disp_LCM3()
{
    int a,b,c,lcm;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        lcm=a;
    else
        lcm=b;
    if (c>lcm)
        lcm=c;
    while(1)
    {
        if(lcm%a==0&&lcm%b==0&&lcm%c==0)
        {
            printf("%d",lcm);
            break;
        }
        lcm++;
    }
}
