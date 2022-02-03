#include<stdio.h>

int main()
{
    int a=10;
    int b= 20;
    a=a+b;
    printf("The value of a=%d\n",a);
    b=a-b;
    printf("The value of b after swapping=%d\n",b);
    a=a-b;
    printf("The value of a after swapping=%d\n",a);
    
    return 0;
}
