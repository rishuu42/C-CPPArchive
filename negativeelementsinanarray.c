#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter Size Of An Array: ");
    scanf("%d",&a);

    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative numbers are: ");
    for(i=0;i<a;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}