#include <stdio.h>
int main()
{
    int a,i,sum=0,b,j,num,fac;
    scanf("%d",&a);
    num=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        fac=1;
        for(j=1;j<=b;j++)
        {
            fac=fac*j;
        }
        sum=sum+fac;
    }
    if(sum==num)
    {
        printf("%d is a Strong Number.",num);
    }
    else{
        printf("%d is not a strong number.",num);
    }
    return 0;
}