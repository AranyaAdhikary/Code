/* insertion sort */

// 1. set i to 1
// 2. if i is equal to the length of the array, go to step 10
// 3. set key to arr[i]
// 4. set j to i-1
// 5. if j is less than 0 or arr[j] is not greater than key , go to step 8
// 6. set arr[j+1] = arr[j]
// 7. increase j by 1 and go to step 5
// 8. set arr[j+1] = key
// 9. increase i by 1 and go to step 2
// 10. sorting is done

#include<stdio.h>

int main()
{
    int arr[20],n,key,j;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        for(j =i-1;j>=0 && arr[j] > key;j--)
            arr[j+1]=arr[j];
        arr[j+1]=key;
    }
    printf("The sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");  
}