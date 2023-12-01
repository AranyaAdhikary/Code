/* print the area of a circle */

#include<stdio.h>

int main()
{
    int r;
    printf("Enter the radius of a circle : ");
    scanf("%d",&r);
    float area = (22.0*r*r)/7;
    printf("The area of a circle is %f.\n",area);
}