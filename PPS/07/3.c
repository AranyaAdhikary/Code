/* check whether a text is palindrome */

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int flag=0;
    printf("Enter the string :\n");
    gets(a);
    int len = strlen(a);
    for(int i=0,j=len-1; i<len/2 && j>len/2;i++,j--)
        if(a[i] != a[j])
        {
            flag = 1;
            break;
        }
    if(flag==1)
        printf("It is not a palindrome.\n");
    else
        printf("It is a palindrome.\n");

}