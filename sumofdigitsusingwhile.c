#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=b+c;
        a=a/10;
    }
    printf("Sum of digits: %d",c);
    return 0;
}