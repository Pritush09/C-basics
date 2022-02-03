#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float ci;
    printf ("enter the principal amount,rate of interest and time\n");
    scanf ("%d %d %d",&p,&r,&t);
    ci=p*pow((1+r/100.0),t);
    printf("The maturity amount is=%f",ci);
    return 0;
}
