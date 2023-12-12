#include<stdio.h>
int main()
{
    int hours,minutes,seconds,s;
    scanf("%d",&seconds);
    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    s=seconds-((hours*3600)+(minutes*60));
    printf("H:M:S-%d:%d:%d",hours,minutes,s);
}