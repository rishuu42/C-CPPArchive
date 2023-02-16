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
    int arr2[a];
    for(i=0;i<a;i++)
    {
        if(arr1[i]>arr1[i+1])
        {
            arr2[i]=arr1[i];
        }
        if(a==0)
        {
            arr2[i]=0;
        }
    } 
    printf("-------------------------------------------------\n");
    for(i=0;i<a;i++)
    {
        if(arr2[i]!=0)
        {
            printf("Peak Element - %d ",arr2[i]);
        }
    }
    return 0;
}