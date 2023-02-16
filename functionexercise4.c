#include <stdio.h>
#include<math.h>
int a;
int arm(int a)
{
    int b,c=0,z;
    z=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c=pow(b,3)+c;
    }
    if(c==z)
    {
        printf("YES armstrong\n");
    }
    else{
        printf("NO armstrong\n");
    }
}
int per(int a)
{
    int i,b=1,c=0,z;
    z=a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            c=c+i;
        }
    }
    if(c==z)
    {
        printf("Yes Perfect\n");
    }
    else 
    {
        printf("No Perfect\n");
    }
}

int main()
{
    printf("Enter a Number: ");
    scanf("%d",&a);
    arm(a);
    per(a);
    return 0;
}
