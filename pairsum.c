#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("Enter Array Limit: ");
    scanf("%d",&a);
    
    int arr1[a];
    int arr2[a];
    printf("Enter Array: ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("--------------------------------\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(arr1[i]+arr1[j]==10)
            {
              c++;
            }
        }
    }
    printf("Number Of Pair: %d",c/2);
    return 0;
}