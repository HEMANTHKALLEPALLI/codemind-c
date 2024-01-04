#include<stdio.h>
int main()
{
    int x,count=0,m;
    scanf("%d",&x);
    while(x!=0)
    {
        m=x%10;
        count++;
        x=x/10;
        
    }
    printf("%d",count);
}