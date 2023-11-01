#include<stdio.h>
int main()
{
    int totaldays;
    scanf("%d%d",&totaldays);
    int years=totaldays/365;
    int weeks=(totaldays%365)/7;
    printf("%d
%d
",years,weeks);
}