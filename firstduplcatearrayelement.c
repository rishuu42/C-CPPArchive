#include <stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter array limit: ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
               b=arr[i];
               break;
            }

        }
    }
    printf("---------------------------------------");
    printf("Repeated Element: %d",b);
    
    return 0;
}