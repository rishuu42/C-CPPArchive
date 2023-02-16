#include <stdio.h>
int prime1(int);
int main()
{
    int i,a,prime;
    printf("Enter a Number: ");
    scanf("%d",&a);
    prime= prime1(a);
    if(prime==1)
    {
        printf("Prime ");
    }
    else if(prime==0)
    {
        printf("non prime");
    }
}
int prime1(int a)
{
    int j;
    for(j=2;j<a;j++)
    {
        if(a%2==0)
        {
            return 0;
        }
        else 
        {
            continue;
        }
    }
    return 1;
}
