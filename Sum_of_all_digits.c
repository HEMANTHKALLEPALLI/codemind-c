#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d",&n);
   while(n>0)
   { 
       int r=n%10;
       s=s+r;
       n=n/10;
   }
    printf("%d",s);
}