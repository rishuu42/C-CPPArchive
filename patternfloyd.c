#include<stdio.h>
int main()
{
    int i,j,a,c=0;
    printf("Enter The Number of lines: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}