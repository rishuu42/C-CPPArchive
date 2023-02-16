#include <stdio.h>
int main()
{
    int a,b,i,j,sum;
    printf("Enter start limit: ");
    scanf("%d",&a);
    printf("Enter End limit: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        j=1;
        sum=0;
        while(j<i)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
            j++;
        } 
        if(sum==i)
        {
            printf("%d is a perfect number\n",i);
        }
    }
    return 0;
}