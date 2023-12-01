/* find the mean and standard deviation of a set of numbers */

#include<stdio.h>
#include<math.h>

int main()
{
    int num[10],n,sum=0;
    float sd =0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    float mean = (sum*1.0)/n;
    printf("The mean is %f.\n",mean);
    for(int i=0;i<n;i++)
        sd+=pow(num[i]-mean,2);
    printf("The s.d. is %f.\n",sqrt(sd/n));
}