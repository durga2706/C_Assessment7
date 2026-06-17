#include<stdio.h>
void disp_assend(int);
int main()
{
    int x=5;
    disp_assend(x);
    return 0;
}
void disp_assend(int x)
{
    while(x>=1)
    {
        printf("%d\n",x);
        x--;
    }
}
