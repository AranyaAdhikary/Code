/* print whether a number is perfect or not */

#include<stdio.h>

int main()
{
    int n,fact=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        fact += (n%i==0)?i:0;
    if(fact==n)
        printf("It is a perfect number.\n");
    else
        printf("It is not a perfect number.\n");


}