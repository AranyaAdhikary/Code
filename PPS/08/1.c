/* to find the roots of a quadratic equation with the roots given using user defined function */

#include<stdio.h>
#include<math.h>

float d(int a,int b, int c)
{
    return pow(b,2) - 4*a*c;
}

int main()
{
    int a,b,c;
    printf("Enter the value of coefficients : ");
    scanf("%d %d %d",&a, &b, &c);
    if(d(a,b,c)==0)
        printf("The roots are equal and the value is %f.\n",(-b)/(2.0*a));
    else if (d(a,b,c)<0)
        printf("The roots are imaginary.\n");
    else    
        printf("The roots are %f and %f.\n", (-b-sqrt(d(a,b,c)))/(2.0*a), (-b+sqrt(d(a,b,c)))/(2.0*a));
}