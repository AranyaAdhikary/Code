/* print the second largest number in an array */

#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[10]={0},n,max=INT_MIN,max2=INT_MIN;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max) 
            max2 = arr[i];
    }
    printf("The second largest number is %d.\n",max2);
}