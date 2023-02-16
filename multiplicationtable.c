#include <stdio.h>
int main()
{
    int a,i,j;
    printf("Enter the table number starting from 1: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d x %d = %d |",j,i,i*j);
        }
        printf("\n");

    }
    return 0;
}