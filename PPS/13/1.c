/* swap two integers by passing the variables by address */

#include<stdio.h>

int main()
{
    int x,y,*p,*q;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x, &y);
    p=&x;
    q=&y;
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("The value of x and y : %d %d.\n",x, y);
}