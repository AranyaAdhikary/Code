/* print the unit's and ten's place of an integer */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The unit's place is %d.\n", n%10);
    printf("The ten's place is %d.\n",(n%100)/10); 
}