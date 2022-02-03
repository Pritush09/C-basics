#include<stdio.h>
int main(){
    char s[100];
    int l=0, flag=1,i;
	printf("Enter string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l/2;i++)
    {
        if( s[i] != s[l-1-i] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("\nString is a PALINDROME");
    }
    else
    {
        printf("\nString is NOT PALINDROME");
    }
    return 0;
}
