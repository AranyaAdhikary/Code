/* print the area and perimeter of a triangle */

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float peri = a+b+c;
    printf("The perimeter of the triangle is %f.\n", peri);
    float s = peri/2;
    printf("The area of the triangle is %f.\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}