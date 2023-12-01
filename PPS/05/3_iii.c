/* to find the sum of 2/(1*3) + 4/(3*5) + 6/(5*7) + .... to a given number of decimal places */

#include<stdio.h>
#include<math.h>

int main()
{
    int n, deci;
    float sum=0.0;
    printf("Enter the number of terms and decimal places : ");
    scanf("%d %d", &n, &deci);
    for(int i=2;i<=n*2;i+=2)
        sum += (i*1.0)/((i-1)*(i+1));
    int po=(int)pow(10,deci);
    int ans = (int)(sum*po);
    int ad = ans/po;
    int bd = ans%po;
    printf("The sum is %d.%d.\n",ad,bd);
}