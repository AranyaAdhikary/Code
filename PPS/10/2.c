/* solve x^3 - 8x - 4 = 0 using Regula Falsi method */

#include<stdio.h>
#include<math.h>

double f(int x)
{
    return x*x*x - 8*x - 4;
}

void falsi(int x1, int x2)
{
    
    if(f(x1)*f(x2)>=0)
    {
        printf("Wrong initial values.\n");
        return;
    }
    double x0;
    while(1>0)
    {
        x0=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        if(f(x0)==0.0)
            break;
        else if(f(x0)*f(x1)<0)
            x2=x0;
        else
            x1=x0;
    }
    int deci;
    printf("Enter the number of decimal places : ");
    scanf("%d", &deci);
    int po=(int)pow(10,deci);
    int ans = (int)(x0*po);
    int ad = ans/po;
    int bd = ans%po;
    printf("The root is %d.%d.\n",ad,bd);
}

int main()
{
    falsi(-1, 1);    
}