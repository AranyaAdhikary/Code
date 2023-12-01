/* swap two integers without using a temporary variable */

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, the value of a and b : %d %d.\n", a, b);
}