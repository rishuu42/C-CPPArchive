#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("Enter The Array Limit: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int temp;
    for(i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}