#include<stdio.h>      
int main(){  
int a[10],n,i;     
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%8;    
n=n/8;    
}    
printf("\nOctal of Given Number is: ");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  