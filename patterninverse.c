#include<stdio.h>
int main()
{
    int i,j,a,c;
    printf("Enter The Number of lines: ");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        c=a;
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}