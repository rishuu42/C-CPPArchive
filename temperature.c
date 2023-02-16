#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter The Temperature (in C): ");
    scanf("%f",&a);
        b = (9*a)/5 + 32;
        
        c = (a + 273.15);
        printf("%f \nin Fahrenheit %f\nin Kelvin %f\n",a,b,c);
        
    return 0;
}


