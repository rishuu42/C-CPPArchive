#include <stdio.h>
int main()
{
    float i;
    float a,b;
    printf("Enter a Number: ");
    scanf("%f",&a);
    b=0;
    for(i=1.0;i<=a;i++)
    {
        b=b+(1/i);
    }
    printf("Sum of digits: %.2f",b);
}