/* print the Armstrong numbers from 100 to 1000 */

#include<stdio.h>
#include<math.h>

int main()
{
    for(int i=100;i<=1000;i++)
    {
        int n=i,num=i,c=0;
        while(n>0)
        {
            c++;
            n=n/10;
        }
        float sum=0.0;
        while(num>0)
        {
            int d = num%10;
            sum+=pow(d,c);  
            num=num/10;
        }
        if(sum==i)
            printf("%d ", i);
    }
}