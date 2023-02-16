#include<stdio.h>
int main()
{
    int a;
    float i,j=0;
    printf("Enter the limit: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        j=j+1/i;
    }
    printf("%d %f",a,j);
    return 0;
}