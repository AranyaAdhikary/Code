/* print the sum of the series
    1 - 3 + 5 - 7 + 9 ..... n terms */

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1,k=1;i<=n;i++,k+=2)
        sum = (i%2==0)?sum-k:sum+k;
    printf("%d\n",sum);
}