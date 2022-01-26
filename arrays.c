#include<stdio.h>
int main()    // here we are using array to create a matrix 2d
{   
    int a[2][2],i,j;
    printf("Enter the array elements ");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");

    printf("Matrix elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
    }          
    
         
    
     
    return 0;

}