#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    int* ptr=&a;
    int* qtr=&b;
    printf("%d",*ptr+*qtr);
    return 0;
}