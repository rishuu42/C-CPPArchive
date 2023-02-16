#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("Input the size of the square matrix: ");
    scanf("%d",&a);

    int arr1[a][a];
    printf("Enter values for matrix 2: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Element [%d] [%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    int arr2[a][a];
    printf("Enter values for matrix 2: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Element [%d] [%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for(i=0;i<a;i++)
    {
         for(j=0;j<a;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------------------\n");
     for(i=0;i<a;i++)
    {
         for(j=0;j<a;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    int arr3[a][a];
    printf("--------------------------------------------------\n");
    for(i=0;i<a;i++)
    {
         for(j=0;j<a;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}