#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter The array limit:");
    scanf("%d",&j);
    int a[j];
    for (i=1;i<=j;i++)
    {
        if(i==1)
        {
            printf("Enter The %dst Element: ",i);
            scanf("%dst",&a[i]);
        }
        else if(i==2)
        {
            printf("Enter The %dnd Element: ",i);
            scanf("%dnd",&a[i]);
        }
        else if(i==3)
        {
            printf("Enter The %drd Element: ",i);
            scanf("%drd",&a[i]);
        }
        else
        {
            printf("Enter The %dth Element: ",i);
            scanf("%dth",&a[i]);
        }
        
    }
    for(i=1;i<=j;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}