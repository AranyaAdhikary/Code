/* bubble sort */

// 1. set i to 0
// 2. if i is equal to the length of the array, go to step 10
// 3. set flag to 0
// 4. set j to 0
// 5. if j is equal to n-i-1 , go to step 8
// 6. if arr[j] is greater than arr[j+1], swap arr[j] and arr[j+1] and increase flag by 1
// 7. increase j by 1 and go to step 5
// 8. if flag is equal to 0, go to step 10
// 9. increase i by 1 and go to step 2
// 10. sorting is done

#include<stdio.h>

int main()
{
    int arr[20],n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j =0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                flag++;
            }
        if(flag==0)
            break;
    }
    printf("The sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");  
}