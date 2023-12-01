/* to find the sum of 2/(1*3) + 4/(3*5) + 6/(5*7) + .... to a given number of decimal places */

#include<stdio.h>
#include<math.h>

float pattern(int n,int i)
{
    float sum=0.0;
    if(n==0)
        return 0;
    else
        return sum + (i*1.0)/((i-1)*(i+1)) + pattern(n-1,i+2);
}

int main()
{
    int n, deci;
    printf("Enter the number of terms and decimal places : ");
    scanf("%d %d", &n, &deci);
    int po=(int)pow(10,deci);
    int ans = (int)(pattern(n,2)*po);
    int ad = ans/po;
    int bd = ans%po;
    printf("The sum is %d.%d.\n",ad,bd);
}