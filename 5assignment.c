#include<stdio.h>
int main(){
int year;
printf("Enter any year ");
scanf("%d", &year);
if(year%400==0 || year%4==0 && year%100!=0)
{
printf("It is a leap year");
}
else
{
printf("It is not a leap year");
}
return 0;
}
