#include<stdio.h>
int main()
{
    float units,charge,surcharge,bill,total;
    scanf("%f",&units);
    if(units<199)
    {
        charge=1.20;
        surcharge=100;
        bill=(units*charge);
    }
    else if(units>=200 && units<400)
    {
        charge=1.50;
        surcharge=100;
         bill=(units*charge);
    }
    else if(units>=400 && units<600)
    {
        charge=1.80;
        surcharge=115;
         bill=(units*charge);
    }
    else if(units>=600)
    {
        charge=2.00;
        surcharge=115;
         bill=(units*charge);
    }
    if(bill>400)
    {
        surcharge=bill*0.15;
    }
    else
    surcharge=100;
     total=bill+surcharge;
     printf("%.2f",total);
}