/*  structure containing roll, name, address of several students, 
    sort in ascending order of roll number and
    display the sorted students' details */

#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    char address[100];
};

int main()
{
    int n,i,j,key;
    struct student s[10],temp;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Roll : ");
        scanf("%d",&s[i].roll);
        printf("Name : ");
        scanf("%s",s[i].name);
        printf("Address : ");
        scanf("%s",s[i].address);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(s[i].roll>s[j].roll)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    printf("The sorted details : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",s[i].roll);
        printf("%s\t",s[i].name);
        printf("%s\n",s[i].address);
    }
}
