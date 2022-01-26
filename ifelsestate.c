#include<stdio.h>

int main()
{
              // the if else statement usage 
    int password;
    printf("Enter your password: ");
    scanf("%d",&password);
    if (password==2058)
    {
        printf("welcome\n");
    
    }
    else if (password==2308)
    {
        printf("NOt this bro");

    }
    else
    {
        printf("the function ended\n");
    }
    

    // switch case //////////////////////////////

    int a,b,c;
    int ch;
    printf("Enter the number: ");
    scanf("%d%d",&a,&b);

    printf("Enter ur choice: ");
    scanf("%d",&ch);

    switch (ch)      // ye case no. ke hisab se output deata he jese manlo 1 likhenge tab ye hame add karke output dega 
    {
    case 1:c = a+b;
            printf("%d\n",c);
            break;
    case 2:c = a-b;
            printf("%d\n",c);
            break;
    case 3:c= a*b;
            printf("%d\n",c);
            break;
    case 4:c= a/b;
            printf("%d\n",c);
            break;
    default:printf("Invalid input\n");
        break;
    }
    return 0;
}

