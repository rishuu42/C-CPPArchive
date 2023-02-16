#include<stdio.h>
int main()
{
    int a,i,sum;
    float avg;
    printf("Enter array limit: ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum : %d\n",sum);
    printf("Avg : %d",sum/a);
    return 0;   
}