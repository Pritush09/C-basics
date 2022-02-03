#include <stdio.h>
#include<math.h>
int main()
{ 
  int n,m,p,r,rem,s=0,c=0;
printf(" enter the number ");
scanf("%d",&n);
m=n;
p=n;
while(m!=0){
r=m%10;
c++;
m/=10;
}
while(p!=0)
{
rem=p%10;
s+=pow(rem,c);
p/=10;
}
if(s==n)
printf ("armstrong no");
else 
printf("not armstrong");
  return 0;
} 
