/* binary search */

// 1. Take num as the number to be searched
// 2. set c to 0
// 3. set lp = 0 and up = length of array
// 4. if lp is more than up, go to step 7
// 4. mid = (lp+up)/2
// 5. if arr[mid] is equal to num,  increase the value of c by 1 and go to step 7
// 6. if arr[mid] is greater than num, up = mid-1 and go to step 4
// 6. if arr[mid] is less than num, lp = mid-1 and go to step 4
// 7. if c is 1, the number is present
// 8. if c is 0, the number is not present

#include<stdio.h>

int main()
{
    int arr[20],n,num,c=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to be searched : ");
    scanf("%d",&num);
    int lp=0,up=n;
    while(lp<=up)
    {
        int mid = (lp+up)/2;
        if(arr[mid]==num)
        {
            c++;
            break;
        }
        else if(arr[mid]>num)
            up=mid-1;
        else
            lp=mid+1;
    }
    if(c==1)
        printf("The number is present.\n");
    else
        printf("The number is not present.\n");
}