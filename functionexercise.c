#include <stdio.h>
int func(int);
int main()
{
    int n,a;
    float b=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        b=func(a)+b;
    }
    printf("%.1f ",b);
    return 0;
}
int func(int a)
{
    int i,sum=0,fac=1,x;
    for(i=1;i<=a;i++)
    {
        fac=fac*i;
        x=fac/i;
        sum=sum+x;
    }
    return sum;
}