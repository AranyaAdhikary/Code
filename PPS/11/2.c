/* find the definite integral of dx/(1+x^2) in the interval [0,4] using Simpson's 1/3 rule */

#include<stdio.h>
#include<math.h>

float f(int x)
{
    return 1.0/(1+x*x); 
}

int main()
{
    int a=0,b=4,n,x;
    float sum=0.0;
    printf("Enter the number of even intervals : ");
    scanf("%d",&n);
    float h = fabs(b-a)/n;
    for(int i=1;i<n;i++)
    {
        x=a+i*h;
        if(i%2==0)
            sum = sum+2*f(x);
        else
            sum = sum+4*f(x);

    }
    float integral = (h*(f(a)+f(b)+sum))/3;
    printf("The integral is %f.\n",integral);
}