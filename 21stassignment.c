#include<stdio.h>  
int fact(int);  
int main(){
	float f=0;
	int x;
	for(x=1;x<=5;x++){
		f=f+(1.0/fact(x));
	}
	printf("Factorial = %f",f);
}
int fact(int f){
	if (f == 0||f==1)  
        return 1;  
    else  
        return f*fact(f-1);
}
