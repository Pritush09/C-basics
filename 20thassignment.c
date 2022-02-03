
#include <stdio.h>  
void swap(int *, int *); 
int main()  
{  
	int a,b;
    printf("Enter tha value of a and b: ");
	scanf("%d %d",&a,&b);   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping values in main a = %d, b = %d\n",a,b);
}
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
