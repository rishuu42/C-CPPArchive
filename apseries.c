#include <stdio.h>
#include <math.h>
int main()
{
    float start,sum=0,i,n,a=0;
    float diff;
    printf("Enter Start Number of the progression: ");
    scanf("%f",&start);
    printf("Enter number of terms: ");
    scanf("%f",&n);
    printf("Enter Common Ratio: ");
    scanf("%f",&diff);
    for(i=0;i<n;i++)
    {
        a=start*pow(diff,i);
        printf("%.2f ",a);
        sum=sum+a;
    }
    printf("\nSum Of GP is %.2f",sum);
    return 0;
}