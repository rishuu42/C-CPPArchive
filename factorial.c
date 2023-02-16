#include<stdio.h>
int main()
{
    int a,fact=1,i=1;
    printf("Enter The Number you want to get factorial of: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)5
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d",a,fact);
}