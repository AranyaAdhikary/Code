/* strcpy */

#include<stdio.h>

int length(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

void copy(char a1[],char a2[])
{
    for(int i=0;i<length(a2);i++)
        a1[i]=a2[i];
    for(int i=length(a2);i<100;i++)
        a1[i] = '\0';
    printf("%s",a1);
}

int main()
{
    char a1[100],a2[50];
    printf("Enter the strings : \n");
    gets(a1);
    gets(a2);
    printf("The first string is : \n");  
    copy(a1,a2);
}