/* recursive function to find power of a number */

#include<stdio.h>

int power(int n, int p)
{
    if (p==0)
        return 1;
    else
        return n*power(n,p-1);
}

int main()
{
    int n,p;
    printf("Enter a number and the power : ");
    scanf("%d %d", &n,&p);
    printf("%d to the power of %d is %d.\n", n, p,power(n,p));
}