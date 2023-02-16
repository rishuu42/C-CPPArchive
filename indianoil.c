#include <stdio.h>
int main()
{
    int bunk, litres, millilitres,i,totallit=0,totalmil=0,a;
    //scanning the number of bunks
    printf("Enter The number of bunks: ");
    scanf("%d",&bunk);
    //scanning the L and mL from user and adding them together
    for(i=0;i<bunk;i++)
    {
        printf("Enter Litres from bunk %d: ",i+1);
        scanf("%d",&litres);
        totallit=totallit+litres;
        printf("Enter Milliliters from bunk %d: ",i+1);
        scanf("%d",&millilitres);
        totalmil=totalmil+millilitres;
    }
    //converting the mL to L and adding it to previous L
    if(totalmil>=1000)
    {
        a=totalmil/1000;
        totalmil=totalmil%1000;
        totallit=totallit+a;
    }
    
    printf("Total Quantity = %d litres %d millilitres",totallit,totalmil);


    return 0;
}