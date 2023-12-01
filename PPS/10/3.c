/* solve x^3 - 8x - 4 = 0 using Newton Raphson method */

#include<stdio.h>
#include<math.h>

double eps=0.00001;

double f(int x)
{
    return x*x*x - 8*x - 4;
}

double deri(int x)
{
    return 3*x*x - 8;
}

void newton(double x)
{    
    while(1>0)
    {
        if(fabs(f(x))<=eps)
            break;
        x-=f(x)/deri(x);
    }
    int deci;
    printf("Enter the number of decimal places : ");
    scanf("%d", &deci);
    int po=(int)pow(10,deci);
    int ans = (int)(x*po);
    int ad = ans/po;
    int bd = ans%po;
    printf("The root is %d.%d.\n",ad,bd);
}

int main()
{
    newton(540);    
}