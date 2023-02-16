#include<stdio.h>
int main()
{
    int a,b,i,j,k,temp;
    printf("Enter The Array 1 Limit: ");
    scanf("%d",&a);
    
    int arr1[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    if(a%2==0)
    {
        for(i=0;i<a;i++)
        {    
            temp=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=temp;
            i++;
        }
    }
    else
    {
        a=a-1;
        for(i=0;i<a;i++)
        {    
            temp=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=temp;
            i++;
        }

    }
    for(i=0;i<a;i++)
    {
        printf("Alternative Switched Array: %d ",arr1[i]);
    }
     return 0;
}