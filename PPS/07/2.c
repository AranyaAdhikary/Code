/* multiply two matrices */

#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10]={0}, m, n, p;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d",&m, &n);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &p);
    printf("Enter the first matrix :\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    printf("Enter the second matrix :\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
            scanf("%d", &b[i][j]);
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            for(int k=0;k<n;k++)
                c[i][j] += a[i][k]*b[k][j];    
    printf("Matrix 1 * Matrix 2 :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}