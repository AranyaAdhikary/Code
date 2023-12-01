/* find factorial, permutation, combination */

#include<stdio.h>

int factorial(int n)
{
    int ans = 1;
    for(int i=1;i<=n;i++)
        ans=ans*i;
    return ans;
}

int permutation(int n, int r)
{
    return factorial(n)/factorial(n-r);
}

int combination(int n, int r)
{
    return permutation(n,r)/factorial(r);
}

int main()
{
    int n, r;
    printf("Enter the values of n and r : ");
    scanf("%d %d", &n,&r);
    printf("The factorial of %d is %d.\n",n,factorial(n));
    printf("The value of %dP%d is %d.\n", n, r, permutation(n,r));
    printf("The value of %dC%d is %d.\n", n, r, combination(n,r));
}