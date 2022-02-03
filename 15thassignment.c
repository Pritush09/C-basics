#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,k,m,n;
	printf("Enter the number of rows:\n");
	scanf("%d",&m);
	printf("Enter the number of column:\n");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter data in [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("Transposed matrix is\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Multiply of the matrix=\n");
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++){
    		c[i][j]=0;
    		for(k=0;k<n;k++){
    			c[i][j]+=a[i][k]*b[k][j];
    		}
    	}
    }
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++)
    	printf("%d\t",c[i][j]);
    	printf("\n");
    }
			return 0;
}
