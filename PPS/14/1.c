/* store a set of integers in input.txt */

#include<stdio.h>

int main()
{
    FILE *fpt;
    int n,num;
    fpt = fopen("input.txt","w");
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        fprintf(fpt,"%d ",num);       
    }
    fclose(fpt);
}
