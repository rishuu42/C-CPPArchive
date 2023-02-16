#include <stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter FIrst Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
      sum=sum+b;
    }
    printf("Multiplication of %d and %d is: %d ",a,b,sum);

    return 0;
}