/* to find out whether a year if a leap year or not */

#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4!=0)
        printf("It is not a leap year.\n");
    else
    {
        if((year%100==0)&&(year%400!=0))
            printf("It is not a leap year.\n");
        else
            printf("It is a leap year.\n");
    }
}