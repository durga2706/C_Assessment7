#include<stdio.h>
void disp_assend(int);
int main()
{
    int x=1;
    disp_assend(x);
    return 0;
}
void disp_assend(int x)
{
    int sum=0;
    while(x<=5)
    {
        sum=sum+x;
        x++;
    }
    printf("%d\n",sum);
}
