#include <stdio.h>
int main()
{
    int a,i,p,q;
    printf("Enter The no of students : ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf("Enter Marks Of %d student :",i+1);
        scanf("%d",&arr[i]);
    }
    int b[5],c[5];
    for(i=0;i<a;i++)
    {
        if(arr[i]>=80)
        {
           p++;
        }
        else if(arr[i]>=60 && arr[i]<=70)
        {
           q++;
        }
    }
    printf("-----------------------------------------------------------\n");
    printf("Students who scored above 80: %d\nStudents who scored between 60 and 70: %d",p,q);
    return 0;
}