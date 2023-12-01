/* assign grade according to average of marks in four subjects */

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the marks : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    float rank = (a+b+c+d)/4.0;
    if(rank>=90)
        printf("Grade O\n");
    else if(rank>=80)
        printf("Grade A\n");
    else if(rank>=70)
        printf("Grade B\n");
    else if(rank>60)
        printf("Grade C\n");
    else if(rank>=50)
        printf("Grade D\n");
    else if(rank>=40)
        printf("Grade E\n");
    else
        printf("Grade F\n");
}