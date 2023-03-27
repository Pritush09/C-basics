#include <stdio.h>
#include <limits.h>

void printOptimalParens(int s[][4], int i, int j) {
    if (i == j)
        printf(" A%d ", i);
    else {
        printf("(");
        printOptimalParens(s, i, s[i][j]);
        printOptimalParens(s, s[i][j] + 1, j);
        printf(")");
    }
}
 
int matrixChainOrder(int p[], int n) {
    int m[n][n];
    int s[n][n];
    int i, j, k, L, q;
 
    for (i = 1; i < n; i++)
        m[i][i] = 0;
 
    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
 
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
 
    printf("Optimal Parenthesization: ");
    printOptimalParens(s, 1, n-1);
    printf("\n");
 
    return m[1][n - 1];
}
 
int main() {
    int arr[] = {5,6,4,7};
    int n = 4;
 
    printf("Minimum number of multiplications is %d\n",
           matrixChainOrder(arr, n));
 
    return 0;
}
