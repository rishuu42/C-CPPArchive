#include <stdio.h>
int main()
{
    float a,b,add,sub,mul,div;
    printf("Enter Two Numbers: ");
    scanf("%f %f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Sum is: %.2f\n",add);
    printf("Difference is: %.2f\n",sub);
    printf("Multiplication is: %.2f\n",mul);
    printf("Division is: %.2f\n",div);
    return 0;
}