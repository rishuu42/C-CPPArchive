#include <stdio.h>
int main()
{
int a,i,j,temp;
printf("Enter number of elements: ");
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
    printf("Enter Element %d: ",i+1);
    scanf("%d",&arr[i]);
}
for(i=0;i<a-1;i++)
{
    for(j=a-1;j>=i;j--)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(i=0;i<a;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}