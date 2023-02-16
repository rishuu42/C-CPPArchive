#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,num,d,e;
    printf("Enter a Three Digit Number: ");
    scanf("%d",&a);
    num=a;
    while(a!=0)
    {
        b=a%10;
        c=b*b*b+c;
        a/=10;
    } 
    if(num==c)
    {
        printf("The number is a armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
}
