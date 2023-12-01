/* function that can substitute pow() */

#include<stdio.h>

int power(int n, int p)
{
    int ans=1;
    for(int i=1;i<=p;i++,ans=ans*n);
    return ans;
}

int main()
{
    int n,p;
    printf("Enter the number and the power : ");
    scanf("%d %d", &n, &p);
    printf("The answer is %d.\n", power(n,p));
}