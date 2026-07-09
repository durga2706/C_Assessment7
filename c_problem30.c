#include <stdio.h>
void disp_count_HCF2();
int main()
{
    disp_count_HCF2();
    return 0;
}
void disp_count_HCF2()
{
    int a,b,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    if (a<b)
        hcf=a;
    else
        hcf=b;
    while (hcf>=1)
    {
        if (a%hcf==0&&b%hcf==0)
        {
            printf("%d",hcf);
            break;
        }
        hcf--;
    }
}
