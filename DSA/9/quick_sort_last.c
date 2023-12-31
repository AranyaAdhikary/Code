#include <stdio.h>

void swap(int *x,int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
}

int partition(int a[],int p, int r)
{
	int x = a[r];
	int i=p-1;
	for (int j=p;j<=r-1;j++)
		if(a[j]<=x)
		{
			i=i+1;
			swap(&a[i],&a[j]);
		}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void quicksort(int a[],int p, int r)
{
	if (p<r)
	{
		int q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main()
{
	int a[20],n;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("The sorted array : ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
