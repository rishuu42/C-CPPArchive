#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter the length of the array: ");
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    int y[i];
    for(i=0;i<a;i++)
    {
        if(x[i]>100&&x[i]<400)
        {
            y[i]=x[i];
        }
    }
    printf("----------------------------------\n");
   
    for(i=1;i<=a;i++)
    {
        if(y[i]==0)
        {
            continue;
        }
        else if(y[i]!=0)
        {
            printf("%d",y[i]);
            break;
        }
    }
    return 0;
}