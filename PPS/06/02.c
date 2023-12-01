/* change the contents of a particular position of the array */

#include<stdio.h>

int main()
{
    int arr[10],n,pos,new;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position and its value : ");
    scanf("%d %d",&pos,&new);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    arr[pos-1]=new;
    printf("The changed array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}