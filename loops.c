
#include<stdio.h>

int main()
{
int i=0;
while(i<10)
{
    printf("%d ",i);
    ++i;
}
printf("\n");

// do while loop 
int h=1;
do
{
    printf("%d ",h);
    ++h;
}
while (i<0);

printf("\n");

// for loop
int f;
int count = 10;
for ( f = 0; f < count; f++)
{
    printf("%d ",f);
}



return 0; 
}