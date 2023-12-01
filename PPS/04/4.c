/* amicable pairs less than or equal to 10000 */

#include<stdio.h>

int sum_fact(int n)
{   
    int sum =0;
    for(int i=1;i<n;i++)
        if(n%i==0)
            sum=sum+i;
    return sum;
}

int main()
{
    for (int i = 1;  i <= 10000;  i++)
    {
        int j = sum_fact(i);
        if (i < j && sum_fact(j) == i) 
            printf("%d %d\n",i, j);
            
    }
}

