/* display the duplicate numbers in an array and number of times they occur */

#include<stdio.h>

int main()
{
    int arr[20],count[20],freq,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[i] =-1;
    }
    for(int i=0;i<n;i++)
    {
        freq=1;
        for(int j= i+1;j<n;j++)
            if(arr[i]==arr[j])
            {
                freq++;
                count[j]=0;
            }
        if(count[i]!=0)
        count[i]=freq;
    }
    for(int i=0;i<n;i++)
        if(count[i]!=0 && count[i]!=1)
            printf("%d occurs %d times.\n",arr[i],count[i]);
}