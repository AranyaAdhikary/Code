/* show the use of '*=', '/=', '+=', '-=' */

#include<stdio.h>

int main()
{
    int n1, n2, n3, n4;
    printf("Enter 4 numbers : ");
    scanf("%d %d %d %d",&n1, &n2, &n3, &n4);
    n1*=2;
    printf("The first number multiplied by 2 is %d.\n", n1);
    n2/=2;
    printf("The second number divided by 2 is %d.\n", n2);
    n3+=2;
    printf("The third number added with 2 is %d.\n", n3);
    n4-=2;
    printf("The fourth number subtracted by 2 is %d.\n", n4);
}