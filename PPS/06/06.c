/* linear search */

// 1. Take num as the number to be searched
// 2. set c to 0
// 3. set i to 0
// 4. if i is more than the length of array, go to step 7
// 5. if arr[i] is equal to num,  increase the value of c by 1 and go to step 7
// 6. increase i by 1 and go to step 4
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
    for(int i=0;i<n;i++)
        if(num==arr[i])
        {
            c++;
            break;
        }
    if(c==1)
        printf("The number is present.\n");
    else
        printf("The number is not present.\n");
}