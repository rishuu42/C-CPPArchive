#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns :");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the values of the matrix: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Index [%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the value to be searched\n");
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(c==arr[i][j])
            {
                printf("Element %d exists at index [%d] [%d]\n",c,i+1,j+1);
            }
        }
    }
}