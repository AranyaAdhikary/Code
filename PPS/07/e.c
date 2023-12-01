/* strlen */

#include<stdio.h>

int length(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

int main()
{
    char arr[50];
    printf("Enter the string : \n");
    gets(arr);
    printf("The length of the string is %d.\n", length(arr));
}