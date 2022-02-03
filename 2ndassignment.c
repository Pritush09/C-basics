#include<stdio.h>

int main()

{
    int a;float b;char c;double d;
    printf("Enter the integer value\n");
    scanf("%d",&a);
    printf("The value of a=%d\n",a);
    printf("The address of a=%x\n",&a);
    printf("size of int % ld\n",sizeof(a));
    
    printf("Enter the float value\n");
    scanf("%f",&b);
    printf("The value of b=%f\n",b);
    printf("The address of b=%x\n",&b);
    printf("size of float % ld\n",sizeof(b));
    
    printf("Enter the character value\n");
    scanf(" %c",&c);
	printf("The value of c=%c\n",c);
    printf("The address of c=%x\n",&c);
	printf("size of char % ld\n",sizeof(c));
	
    printf("enter the double value\n");
    scanf("%lf",&d);
    printf("The value of d=%lf\n",d);
    printf("The address of d=%x\n",&d);  
    printf("size of double % ld\n",sizeof(d));
    
    return 0;

}
