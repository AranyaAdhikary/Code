/* show the use of bitwise AND, OR, NOT, XOR, LEFT SHIFT, RIGHT SHIFT */

#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1, &n2);
    printf("%d and %d is %d.\n", n1, n2,n1&n2);
    printf("%d or %d is %d.\n", n1, n2,n1|n2);
    printf("not %d is %d.\n",n1, ~n1);
    printf("%d left shift by 2 is %d.\n",n1,n1<<2);
    printf("%d right shift by 2 is %d.\n",n2,n2>>2);
}