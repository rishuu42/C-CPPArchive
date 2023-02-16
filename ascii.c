#include <stdio.h>  
int main()  
{  
    int a,b,i,x,y,z;
    printf("Enter number of times user will enter: ");
    scanf("%d",&a);
    x=0;
    y=0;
    z=0;
    for(i=1;i<=a;i++)
    {
        printf("Enter Value: ");
        scanf("%d",&b);
        if(b>0)
        {
            x++;
        }
        else if(b==0)
        {
            y++;
        }
        else if(b<0)
        {
            z++;
        }
    }
    printf("Number Of Positive Values: %d\nNumber of Negative Values: %d\nNumber of Zero: %d",x,z,y);
}  