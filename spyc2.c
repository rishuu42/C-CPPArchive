#include <stdio.h>
struct var
{
    int first;
    int second;
}c1;

void add(int *x,int *y)
{
   printf("Addition is: %d\n",*x+*y);
}
void sub(int *x,int *y)
{
   printf("Subtraction is: %d",*x-*y);
}
int main()
{
    int c;
    int *x,*y;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&c1.first,&c1.second);
    printf("Enter \n1.Addition\n2.Subtraction\n");
    scanf("%d",&c);
    x=&c1.first;
    y=&c1.second;
    switch(c)
    {
        case 1:{
            add(x,y);
            break;
        }
        case 2:{
            sub(x,y);
            break;
        }
    }
    return 0;
}