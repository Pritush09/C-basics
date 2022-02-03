#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100],ch;
	int i,c=0,c1=0,c2=0,c3=0,c4=0,c5=0;
	printf("enter the string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		ch=tolower(s[i]);
		if(ch=='a')
		c1++;
		if(ch=='e')
		c2++;
		if(ch=='i')
		c3++;
		if(ch=='o')
		c4++;
		if(ch=='u')
		c5++;
	}
	c=c1+c2+c3+c4+c5;
	printf("frequency of 'a' : %d\n",c1);
	printf("frequency of 'e' : %d\n",c2);
	printf("frequency of 'i' : %d\n",c3);
	printf("frequency of 'o' : %d\n",c4);
	printf("frequency of 'u' : %d\n",c5);
	printf("Total no of vowels: %d",c);
	return 0;
}
