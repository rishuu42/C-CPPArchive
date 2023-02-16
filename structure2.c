//Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include <stdio.h>

int main()
{
    struct student
{
    int roll_no;
    char name[30];
    int age;
    char address[200];
    int marks;
};
    int i;
    struct student stud[15];
    for(i=0;i<15;i++)
    {
        printf("Student %d\n",i+1);
        stud[i].roll_no=i+1;
        printf("Enter Name: ");
        scanf("%s",&stud[i].name);
        printf("Enter Age: ");
        scanf("%d",&stud[i].age);
        printf("Enter Address: ");
        scanf("%s",&stud[i].address);
        printf("Enter Marks: ");
        scanf("%d",&stud[i].marks);
    }
    for(i=0;i<15;i++)
    {
        printf("Student %d\n",i+1);
        printf("Roll No: %d\n",stud[i].roll_no);
        printf("Name: %s\n",stud[i].name);
        printf("Age: %d\n",stud[i].age);
        printf("Address: %s\n",stud[i].address);
        printf("Marks: %d\n",stud[i].marks);
    }
    return 0;
}