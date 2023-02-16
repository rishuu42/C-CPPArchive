//Program to add two nuumbers using pointers
#include <stdio.h>
int main()
{
    int a,b;
    int *x,*y;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    x=&a;
    y=&b;
    printf("Sum is: %d",*x + *y);
    return 0;
}