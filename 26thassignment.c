#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f1,*f2;
	char s[50],c;
	
	f1 = fopen("Data1.txt","w");
	if(f1 == NULL)
		return 1;
	else
	{
		printf("\nEnter text you want to write: ");
		printf("\nPress Enter twice to stop.");
		while(strlen(gets(s))) 
		{
			fputs(s,f1);
			fputc('\n',f1);
		}
		fclose(f1);
	}
	
}