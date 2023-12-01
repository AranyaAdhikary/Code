/* strcmp */

#include<stdio.h>

int length(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

int compare(char a1[],char a2[])
{
    int a1_len = length(a1);
    int a2_len = length(a2);
    if(a1_len != a2_len)
    {
        if(a1_len < a2_len)
            return -1;
        if(a1_len > a2_len)
            return 1;
    }
    for(int i=0;i<a1_len;i++)
    {
        if(a1[i]<a2[i])
            return -1;
        if(a1[i]>a2[i])
            return 1;
    }
    return 0;
}

int main()
{
    char a1[20],a2[20];
    printf("Enter the strings : \n");
    gets(a1);
    gets(a2);
    printf("%d\n",compare(a1,a2));
}