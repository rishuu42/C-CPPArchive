#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("Enter Lines of Code: ");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        arr[i]=i+1;
    }
    for(i=a;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",arr[a-1]);
        }
        printf("\n");
    }
}
        