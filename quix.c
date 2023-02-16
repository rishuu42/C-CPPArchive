#include <stdio.h>
    int a,b=0,c,d=0,i,z=0;

void coprime(){
for(i=2;i<a;i++)
{
    if(a%i==0){
        b++;
    }
}

if(b==0)
{
    printf("the number is prime\n");
}
else
{
    printf("the number is not prime\n");
}
//---------------------------------------------------------------//
 for(i=2;i<z;i++)
 {
    if(z%i==0)
    {
        d++;
    }
 }
if(d==0)
{
    printf("the reverse number is prime\n");
}

else
{
    printf("the number is not prime\n");
}

//==========================================================================//
if(b==d)
{
    printf("Yes the given number and reversed number are co prime\n");
}
else
{
    printf("no the given number and reversed number are not co prime\n");
} 

}
//--------------------
void main()
{
    int x,y=0;
    printf("Enter the Number");
    scanf("%d",&x);
    a=x;   
    while(x!=0){
        y=x%10;
        x=x/10;
        z=z*10+y;
     }
    printf("%d",z);

    printf("\n");
    coprime(z);

}