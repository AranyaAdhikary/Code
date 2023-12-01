/* print the distance between two points and their slope */

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2;
    printf("Enter the first coordinate: ");
    scanf("%f %f", &x1,&y1);
    printf("Enter the second coordinate: ");
    scanf("%f %f", &x2,&y2);
    printf("The distance between them is %f.\n", sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
    printf("The slope between them is %f.\n",(y2-y1)/(x2-x1));
}