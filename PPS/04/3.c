/* whether a number is prime or not */

#include<stdio.h>

int main()
{
    int n,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(n%i==0)
        {
            c=1;
            break;
        }
    if(c==0)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");
}