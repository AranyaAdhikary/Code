/* recursive function to print a text backward */

#include<stdio.h>
#include<string.h>

void reverse(char arr[], int k)
{
    if (k==strlen(arr))
        return;
    reverse(arr, k+1);
    printf("%c", arr[k]);
}

int main()
{
    char arr[20];
    printf("Enter the string \n");
    gets(arr);
    printf("The reverse of the string \n");
    reverse(arr,0);
    printf("\n");
}