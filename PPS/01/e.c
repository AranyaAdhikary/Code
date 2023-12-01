/* convert celsius into fahrenheit and vice versa */

#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter the Celsius temperature : ");
    scanf("%f",&c);
    printf("The corresponding Fahrenheit temperature is %f.\n",((c*9)/5)+32);
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f",&f);
    printf("The corresponding Celsius temperature is %f.\n",((f-32)*5)/9);
}