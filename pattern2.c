#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter Lines Of Pattern: ");
    scanf("%d",&a);
    int b=1;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
}