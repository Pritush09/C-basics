#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int max=(a>b && a>c)?a:((b>c && b>a)?b:c);
    int min=(a<b && a<c)?a:((b<c && b<a)?b:c);
    printf ("The greatest of the three numbers is=%d\n",max);
    printf ("The smallest of three numbers is=%d",min);
    return 0;
}
