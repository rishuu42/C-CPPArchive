#include <stdio.h>
int array(int[]);
int a;
int main()
{
    int i,x;
    printf("Enter Array Limit");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
    printf("Enter Element %d: ",i+1);
    scanf("%d ",&arr[i]);
    }
    x=array(arr);
    return 0;
}
int array(int arr)
{
    int i,x;
    x=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }
    return x;
    
}