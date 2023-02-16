#include<stdio.h>
int main()
{
    int a,i,j,k;
    
    printf("Enter Square Matrix: ");
    scanf("%d",&a);
    int arr1[a][a];
    int arr2[a][a];
    int arr3[a][a];
    printf("Enter Array 1: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter array 1 [%d,%d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter Array 2: \n");
     for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter array 2 [%d,%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            arr3[i][j]=0;
             for(k=0;k<a;k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    
    printf("-----------------------\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
           printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

