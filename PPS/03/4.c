/* to find the roots of a quadratic equation with the roots given */

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the value of coefficients : ");
    scanf("%d %d %d",&a, &b, &c);
    float d = pow(b,2) - 4*a*c;
    if(d==0)
        printf("The roots are equal and the value is %f.\n",(-b)/(2.0*a));
    else if (d<0)
        printf("The roots are imaginary.\n");
    else    
        printf("The roots are %f and %f.\n", (-b-sqrt(d))/(2.0*a), (-b+sqrt(d))/(2.0*a));
}