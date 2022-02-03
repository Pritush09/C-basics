#include<stdio.h> 
#include<stdlib.h>
typedef struct student
{
	char name[60];
	int roll;
	int marks;
}STU;
int main()
{
	STU std[100];
	int i,n,max;
	printf("\nEnter the number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nEnter the name : ");
		gets(std[i].name);
		printf("\nEnter the value for roll : ");
		scanf("%d",&std[i].roll);
		printf("\nEnter the value for marks : ");
		scanf("%d",&std[i].marks);
}
	max=std[0].marks;
	for(i=1;i<n;i++)
	{
		if (max < std[i].marks)
		   max = std[i].marks;
	}
	printf("Maximum Marks =%d",max);
	
	for (i=0;i<n;i++)
	{
		if (std[i].marks == max)
		  printf("\nName - %s \nRoll - %d  \nMarks - %d\n",std[i].name,std[i].roll,std[i].marks);
	}
	return 0; 
}
