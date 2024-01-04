#include<stdio.h>
int main()
{
    int i,n,r,s;
    scanf("%d%d%d",&n,&r,&s);
    for(i=r;i<=s;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
        
    }
}