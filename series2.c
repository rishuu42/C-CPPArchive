#include <stdio.h>
int main()
{
    int a,i,b,sum=0,x;
    printf("Enter The Number of Terms: ");
    scanf("%d",&a);
    printf("Enter the number to be added: ");
    scanf("%d",&b);
    x=b;
    for(i=1;i<=a;i++)
    {
        sum= sum+x;
        x=x*10+b;
    }
    printf("%d",sum);
    return 0;
}