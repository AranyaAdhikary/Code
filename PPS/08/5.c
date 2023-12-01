/* to find out whether a year if a leap year or not using a function*/

#include<stdio.h>

int leap(int year)
{
    if(year%4!=0)
        return 0;
    else
    {
        if((year%100==0)&&(year%400!=0))
            return 0;
        else
            return 1;
    }

}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(leap(year) == 0)
        printf("It is not a leap year.\n");
    else
        printf("It is a leap year.\n");    
}