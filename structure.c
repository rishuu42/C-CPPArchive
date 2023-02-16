#include <stdio.h>
int main()
{
  int i,a;
  struct student
  {
    int roll_no;
    char name[30];
    int age;
  };

  struct student stud[5];

  for(i=0; i<5; i++)
  {
    printf("Student %d\n",i+1);
    stud[i].roll_no = i+1;
    printf("Enter name : ");
    scanf("%s",&stud[i].name);
    printf("Enter age : ");
    scanf("%d", &stud[i].age);
  }
  printf("--------------------------------\n");
  printf("Enter the Roll Number of the student: ");
  scanf("%d",&a);
  for(i=0; i<5; i++)
  {
    if(stud[i].roll_no == a)
    {
      printf("\nStudent %d\n",i+1);
      printf("Roll no. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Age. : %d\n", stud[i].age);
    }
  }
  return 0;
}

