/* print the non - Fibonacci numbers */

#include<stdio.h>

int main()
{
    int n,a=0,b=1,c=0,d;
    printf("Enter the limit : ");
    scanf("%d", &n);
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(int i=c+1;i<d;i++)
            if(i<=n)
                printf("%d ", i);
            else
                break;
    }
}