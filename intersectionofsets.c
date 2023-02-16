#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("Enter Array 1-2 Limit: ");
    scanf("%d",&a);
    
    int arr1[a];
    int arr2[a];
    printf("Enter Array 1: ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter Array 2: ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("--------------------------------------\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if (arr1[i]==arr2[j])
            {
                printf("The Intersection Element is: %d\n",arr1[i]);
            }
        }
    }
    return 0;
}