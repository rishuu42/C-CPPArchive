#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter The Number of lines: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=a-1;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}