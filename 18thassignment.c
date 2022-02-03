#include<stdio.h>
#include<ctype.h>
int main()
{
	char n[100];
	int i;
	printf(" Enter the name \n");
	gets(n);
	
	printf("Abbreviated form is\n");
	for(i=0;n[i]!='\0';i++){
		if(i==0)
		printf("%c.",toupper(n[i]));
		if(n[i]==' ')
		printf("%c.",toupper(n[i+1]));
	}
	return 0;
}
