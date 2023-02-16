#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("Enter Lines Of Pattern: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=a-1;i>0;i--)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
    

