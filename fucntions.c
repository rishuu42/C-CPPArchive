#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
    {
        return n;
    }
    else
    {
        return 0;
    }   
}
int operations(int a,int b,char ch)
{
    switch(ch)
    {
        case 1:
        {
            return(a+b);
            break;
        }
        case 2:
        {
            return(a-b);
            break;
        }
        case 3:
        {
            return(a*b);
            break;
        }
        case 4:
        {
            return(a/b);
            break;
        }
        case 5:
        {
            return(a%b);
            break;
        }
        default:
        {
            return 0;
        }
    }
}
int main()
{
    int x,y,num1,num2,c;
    printf("1. Odd Even\n2. Mathematical operations\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Enter the number to be checked as odd or even: ");
        scanf("%d",&y);
        int z=evenodd(y);
        if(z>0)
        printf("Even Number");
        else
        printf("Odd Number");
    }
    else
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d",&num1,&num2);
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
        scanf("%d",&c);
        int res=operations(num1,num2,c);
        printf("The Result is: %d",res);
    }
    return 0;
}


    