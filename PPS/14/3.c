/*  strcture to store students' records(roll, name, address) in student.dat
    if roll number is provided, the corresponding record should be displayed */

#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
    char address[100];
};

int main()
{
   int n,i,j,key;
    FILE *fpt;
    struct student s[10];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    fpt = fopen("student.dat","w");
    for(i=0;i<n;i++)
    {
        printf("Roll : ");
        scanf("%d",&s[i].roll);
        fprintf(fpt,"\t%d",s[i].roll);
        printf("Name : ");
        scanf("%s",s[i].name);
        fprintf(fpt,"\t%s",s[i].name);
        printf("Address : ");
        scanf("%s",s[i].address);
        fprintf(fpt,"\t%s\n",s[i].address);
    }
    fclose(fpt);   
    fpt = fopen("student.dat","r");
    char out[3];
    char line[100];
    char a;
    printf("Enter the roll number to be found : ");
    scanf("%s",out);
    int flag=0;
    while(fscanf(fpt,"%c",&a)!=EOF)
    {
        fgets(line,99,fpt);
        for(int i=0;i<strlen(line);i++)
        {
        if(out[0]==line[0] && out[1]==line[1])
        {
            flag=1;
            printf("%s",line);
            break;
        }
        }
    }
    fclose(fpt);
}