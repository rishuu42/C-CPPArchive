#include <stdio.h>

int
main ()
{
  int a,b,c,i,j;
  printf ("Enter the size of array 1: ");
  scanf ("%d", &a);
  printf ("Enter the size of array 2: ");
  scanf ("%d", &b);
  int arr1[a];
  for (i = 0; i < a; i++)
    {
      scanf ("%d", &arr1[i]);
    }
  int arr2[b];
  printf("------------------------------------------\n");
  for (i = 0; i < b; i++)
    {
      scanf ("%d", &arr2[i]);
    }
  int arr3[c];
  printf("------------------------------------------\n");
  for (i=0;i<a && i<b;i++)
    {
        arr3[i]=arr2[i]+arr1[i];
        printf("%d ",arr3[i]);
    }

}