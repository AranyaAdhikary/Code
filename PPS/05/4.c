/* print all the prime numbers up to a given limit */

#include<stdio.h>

int main()
{
    int l,u;
    printf("Enter the lower and upper limit : ");
    scanf("%d %d", &l, &u);
    for(int i=l;i<=u;i++)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {
            c=(i%j==0)?1:0;
            if(c==1)
                break;
        }
        if(c==0)
            printf("%d ", i);
    }
}