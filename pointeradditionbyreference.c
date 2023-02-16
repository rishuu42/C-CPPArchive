
#include <stdio.h>
int main()
{
   int i,n;  
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   int arr1[n];
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" Element - %d : ",i+1);
	  scanf("%d",&arr1[i]);
	  }
   printf("The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" Element - %d : %d \n",i,*arr1+i);
	  }
	   return 0;
}