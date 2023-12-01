/* check whether a number is palindrome */

#include<stdio.h>

int main()
{
    int n,d,rev=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int n1=n;
    while(n1!=0)
    {
        d = n1%10;
        rev = (rev*10)+d;
        n1=n1/10; 
    }
    if(n==rev)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");
    
}