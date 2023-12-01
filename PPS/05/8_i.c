/* convert octal number to decimal number */

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0;
    float deci=0.0;
    printf("Enter the octal number : ");
    scanf("%d",&n);
    while(n>0)
    {
        int d = n%10;
        deci+=d*pow(8,i);
        n=n/10;
        i++;
    }
    printf("The decimal number is %d.\n", (int)deci);
}