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
    while(x<=5)
    {
        printf("%d\n",x);
        x++;
    }
}
