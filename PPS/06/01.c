/* create an array, assign inputs and display its contents */

#include<stdio.h>

int main()
{
    int arr[10],n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}