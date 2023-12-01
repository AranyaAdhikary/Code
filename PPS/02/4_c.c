/* show the use of '&&', '||', '!' */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d is more than 0 and less than 100.\n%d\n",n,(n>0 && n<100));
    printf("%d is more than 100 or less than 0.\n%d\n",n,(n>100 || n<0));
    printf("%d not equal to 100.\n%d\n",n,!(n==100));
}