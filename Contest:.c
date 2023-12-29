#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&c,&a,&b);
    if(c<=(a*1+b*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}