/* terms of an A.P. */

#include<stdio.h>

int main()
{
    int a, d, n;
    printf("Enter the first term, common difference and number of terms : ");
    scanf("%d %d %d",&a, &d, &n);
    for(int i=1;i<=n;i++,a=a+d)
        printf("%d ", a);
    printf("\n");
}