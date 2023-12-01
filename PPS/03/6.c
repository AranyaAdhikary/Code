/*switch case to find the sum, differnce, product, quotient of two numbers */

#include<stdio.h>

int main()
{
    int a,b,n;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Enter '1' for sum, '2' for difference, '3' for product and '4' for quotient : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("%d\n",a+b);
            break;
        case 2:
            printf("%d\n",a-b);
            break;
        case 3:
            printf("%d\n",a*b);
            break;
        case 4:
            printf("%d\n",a/b);
            break;
        default:
            break;
   }
}