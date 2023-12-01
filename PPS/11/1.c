/* find the definite integral of dx/(1+x^2) in the interval [0,4] using Trapezoidal method */

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
    printf("Enter the number of intervals : ");
    scanf("%d",&n);
    float h = fabs(b-a)/n;
    for(int i=1;i<n;i++)
    {
        x=a+i*h;
        sum = sum+f(x);
    }
    float integral = (h*(f(a)+f(b)+2*sum))/2;
    printf("The integral is %f.\n",integral);
}