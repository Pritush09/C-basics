#include <stdio.h>
#include <math.h>
void main()
{
	int n, i, s = 1;
	printf("enter the number");
	scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			s = 0;
			break;
		}
	}
	if (s == 1 && n != 1)
		printf("Yes prime number");
	else
		printf("No not prime number");
}

