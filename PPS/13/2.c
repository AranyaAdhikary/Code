/* bubble sort */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *x,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    x = (int *)malloc(n*sizeof(int));
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",x+i);
    printf("The original array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",*(x+i));
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j =0;j<n-i-1;j++)
            if(*(x+j)>*(x+j+1))
            {
                int temp=*(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1)=temp;
                flag++;
            }
        if(flag==0)
            break;
    }
    printf("The sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d ",*(x+i));
    printf("\n"); 
}