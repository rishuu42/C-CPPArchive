
#include<stdio.h>
int main()
{ 
    int i,j,a;
    printf("Enter any side length: ");
    scanf("%d",&a);

  for(i=0;i<=a;i++)
  {
    for(j=0;j<i;j++)
    {
        printf("*");
    } 
    printf("\n");                     
  }
  for(i=a;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
        printf("*");
    } 
    printf("\n");                     
  }
	
	return 0;
}