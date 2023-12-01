/*passes a structure to a function that accepts the user inputs and another function prints it */

#include <stdio.h>
    
struct student
{
  char name[15];
  int roll_no;
  char dept[5];
  int year;
};

void input(struct student *ptr) 
{
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter details of student %d\n", (i + 1));
        printf("Name : ");
        scanf("%s", ptr->name);
        printf("Roll no: ");
        scanf("%d", &ptr->roll_no);
        printf("Dept: ");
        scanf("%s", ptr->dept);
        printf("Year: ");
        scanf("%d", &ptr->year);
        ptr++;
    }
}

void print(struct student *ptr) 
{
    for (int i = 0; i < 3; i++) 
    {
        printf("Name : %s\n", ptr->name);
        printf("Roll no : %d\n", ptr->roll_no);
        printf("Dept : %s\n", ptr->dept);
        printf("Year : %d\n", ptr->year);
        ptr++;
  }
}


int main()
{
    struct student std[3];
    input(std);
    print(std);
}
