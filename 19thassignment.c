#include <stdio.h>
int swap(int, int);
int main(){
	int a,b;
    printf("Enter tha value of a and b: ");
	scanf("%d %d",&a,&b);
    printf("Before swapping the values a = %d, b = %d\n",a,b);
    swap(a,b);
    return 0;
}
int swap (int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("After swapping values a = %d, b = %d\n",a,b);
}
