/* add two matrices */

#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], row, col;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&row, &col);
    printf("Enter the first matrix :\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d", &a[i][j]);
    printf("Enter the second matrix :\n");
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            scanf("%d", &b[i][j]);
            a[i][j]+=b[i][j];
        }
    printf("Matrix 1 + Matrix 2 :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}