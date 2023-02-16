#include<stdio.h>
int main()
{
    int m,d;
    printf("Enter Date Of Birth: ");
    scanf("%d",&d);
    printf("Enter Month of Birth(1-12): ");
    scanf("%d",&m);
    if(m==12&&d>=22||m==1&&d<=19)
    {
        printf("Capricorn");
    }
    else if(m==1&&d>=20||m==2&&d<=17)
    {
        printf("Aquarius"); 
    }
    else if(m==2&&d>=18||m==3&&d<=19)
    {
        printf("Pieces");
    }
    else if(m==3&&d>=20||m==4&&d<=19)
    {
        printf("Aries");
    }
    else if(m==4&&d>=20||m==5&&d<=20)
    {
        printf("Taurus");
    }
    else if(m==5&&d>=21||m==6&&d<=20)
    {
        printf("Gemini");
    }
    else if(m==6&&d>=21||m==7&&d<=22)
    {
        printf("Cancer");
    }
    else if(m==7&&d>=23||m==8&&d<=22)
    {
        printf("Leo");
    }
    else if(m==8&&d>=23||m==9&&d<=22)
    {
        printf("Virgo");
    }
    else if(m==9&&d>=23||m==10&&d<=22)
    {
        printf("Libra");
    }
    else if(m==10&&d>=23||m==11&&d<=21)
    {
        printf("Scorpio");
    }
    else if(m==11&&d>=22||m==12&&d<=21)
    {
        printf("Sagittarius");
    }
    else
    {
        printf("Invalid Birthdate");
    }
    return 0;
}