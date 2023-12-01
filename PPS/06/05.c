/* selection sort */

// 1. set i to 0
// 2. if i is equal to n-1, go to step 10
// 3. min = i
// 4. set j to i+1
// 5. if j is equal to the length of the array, go to 8
// 6. if arr[min] is greater than arr[j], set min = j
// 7. increase j and go to step 5
// 8. swap arr[min] and arr[i]
// 9. increase i by 1 and go to step 2
// 10. sorting is done

#include<stdio.h>

int main()
{
    int arr[20],n,min;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j =i+1;j<n;j++)
            if(arr[min]>arr[j])
                min=j;
        int temp=arr[min];
        arr[min] = arr[i];
        arr[i]=temp;
    }
    printf("The sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");  
}