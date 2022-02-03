#include<stdio.h>
#include<math.h>
int main()
{
	int x,y=0;
	for(x=1;x<=5;x++)
	{
		y+=pow(x,x);
	}
	printf("The sum of the series=%d",y);
	return 0;
	
}
