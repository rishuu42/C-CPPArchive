#include<stdio.h>
struct student
{
        char name[30];
        int age;
        int roll_no;
        float marks;
};
int main()
{
        int a,i;
        printf("Enter Number Of Students: ");
        scanf("%d",&a);
        struct student stud[a];
        for(i=0;i<a;i++)
        {
                printf("Student %d\n",i+1);
                printf("Enter Name: \n");
                scanf("%s",stud[i].name);
                printf("Enter Age: \n");
                scanf("%d",&stud[i].age);
                stud[i].roll_no=i+1;
                printf("Enter Marks: \n");
                scanf("%f",&stud[i].marks);
        }
        for(i=0;i<a;i++)
        {
                printf("Student %d\n",i+1);
                printf("Name : %s\n",stud[i].name);
                printf("Age : %d\n",stud[i].age);
                printf("Roll Number : %d\n",stud[i].roll_no);
                printf("Marks: %.1f\n",stud[i].marks);
        }
        return 0;
}