#include<stdio.h>
int main()
{
    int a,i,sum;
    float avg;
    printf("enter array limit: ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf("Enter Element [%d]",i+1);
        scanf("%d",arr[i]);
    }
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    printf("sum= %d\n",sum);
    
    printf("avg is = %f",sum/a);
    return 0;
}