/* interchange the smallest and largest number in an array */

#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[10]={0},n,pos_max,pos_min,max=INT_MIN,min=INT_MAX;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos_max=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            pos_min=i;
        }
    }
    int temp=arr[pos_max];
    arr[pos_max]=arr[pos_min];
    arr[pos_min]=temp;
    printf("The changed array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}