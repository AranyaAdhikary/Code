/* strcat */

#include<stdio.h>

int length(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

void concatenate(char a1[],char a2[])
{
    for(int i=0,j=0,k=length(a1);i<length(a2);i++,j++,k++)
        a1[k]=a2[j];
    printf("%s",a1);
}

int main()
{
    char a1[100],a2[50];
    printf("Enter the strings : \n");
    gets(a1);
    gets(a2);
    printf("The concatenated string is : \n");  
    concatenate(a1,a2);
}