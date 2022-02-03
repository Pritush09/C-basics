 #include <stdio.h>
void fibo(int,int,int);
int main()
{
	int a;
	printf("Enter the number of term:\n");
	scanf("%d",&a);
	
	fibo(0,1,a);
	return 0;
}
void fibo(int a, int b,int n)
{
	if(n > 0)
	{
		printf("%d ",a);
		fibo(b,a+b,n-1);
	}
}
