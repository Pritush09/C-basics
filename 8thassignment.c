#include <stdio.h>
int main()
{
  char op;
  int n1,n2;
  printf("Enter the expression\n");
  scanf("%d %c %d",&n1,&op,&n2);
  switch (op) {
    case '+':
      printf("%d + %d= %d", n1, n2, n1 + n2);
      break;
    case '-':
      printf("%d - %d= %d", n1, n2, n1-n2);
      break;
    case '*':
      printf("%d * %d= %d", n1, n2, n1*n2);
      break;
    case '/':
    	if(n2==0)
    	{
    		printf("Cannot be divided by zero");
		}
		else
		{
			printf("%d / %d = %d", n1, n2, n1 / n2);
		} 
      break;
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
