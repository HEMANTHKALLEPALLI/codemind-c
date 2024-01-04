#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++){
        if(x%i==0 && y%i==0){
            sum=i;
        }
    }
    printf("%d",sum);
    
}