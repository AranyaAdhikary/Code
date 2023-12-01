/* function that can sort an array using pointer */

#include<stdio.h>
#include<stdlib.h>

void sort(int n,int *arr)
{
    //int min;
    for(int i=0;i<n;i++)
       // min =i;
        for(int j = i+1;j<n;j++)
            if(*(arr+i)>*(arr+j))
            {
           //     min =j;
            int temp = *(arr+i);
            *(arr+i) = *(arr+j);
            *(arr+j) = temp;
            }
    printf("The sorted array : ");
    for(int i =0;i<n;i++)
        printf("%d ",*(arr+i));
}

int main()
{
    int *x,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    x = (int *)malloc(n*sizeof(int));
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",x+i);
    sort(n, x);
}