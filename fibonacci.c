
#include<stdio.h>
int main()
{ 
    int first=0,second=1, result, i,a;
	  printf("Enter number of values: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
      if(i<=1)
      {
        result=i;
      }
      else{
      result=first+second;
      first=second;
      second=result;
      }
      printf("%d ",result);
    }
	return 0;
}