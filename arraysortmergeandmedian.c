#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,temp;
    printf("Enter The Array 1 Limit: ");
    scanf("%d",&a);
    
    int arr1[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter The Array 2 Limit: ");
    scanf("%d",&b);
    int arr2[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[a+b];
    for(i=0;i<a;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<b;i++)
    {
        arr3[a+i]=arr2[i];
    }
    for(i=0;i<a+b;i++)
    {
        for(j=0;j<(a+b)-i-1;j++)
        {
            if (arr3[j]>arr3[j+1])
            {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
            
        }
    }
    c=a+b;
    printf("______________________________________________________________________\n");
     if(c%2==0)
        {
            printf("Median of an even numbered array is: %d %d",arr3[(c/2)-1],arr3[(c/2)]);
        }
        else 
        {
            printf("Median of an odd numbered array is: %d",arr3[(c/2)]);
        }
    return 0;
}