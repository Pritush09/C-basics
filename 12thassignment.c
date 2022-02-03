#include <stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,x=97;
    printf(" enter the value of n\n");
    scanf("%d",&n);
    for(a=n;a>=1;a--){
    for(b=n;b>a;b--)
    {
    printf("  ");
    }
    for(c=1;c<=2*a-1;c++){
    printf("%c ",x);
    x++;
    if(x==123)
    x=97;
    }
    printf("\n");
    }
    return 0;
}
