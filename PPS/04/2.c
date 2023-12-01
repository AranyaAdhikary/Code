/* Fibonacci series */

#include<stdio.h>

int main()
{
    int n, a=0, b=1,c;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("0 1 ");
    for(int i =3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}