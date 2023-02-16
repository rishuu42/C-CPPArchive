#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter a Number: ");
    scanf("%d",&a);
    while(a>0)
    {
       printf("Enter another number: ");
       scanf("%d",&a);
       if(a<0)
       {
         printf("Loop broke at: %d",a);
         break;
       }
       else
         continue;
    }
    return 0;
}
 
