#include<stdio.h>
int main()
{
    int i,j;
    char a[5]={'A','B','C','D','E'};
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",a[i-1]);
        }
        printf("\n");
    }
    return 0;
}