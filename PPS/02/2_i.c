/* swap two integers using a temporary variable */

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a, &b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping, the value of a and b : %d %d.\n", a, b);
}