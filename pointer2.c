#include <stdio.h>
int a, b, c, d;
int max_of_four();

int main() {

    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four();
    printf(5);
    
    return 0;
}
int max_of_four()
{
    if(a>b&&a>c&&a>d)
    {
        printf("%d ",a);
    }
    
    else if(b>c&&b>d&&b>a)
    {
        printf("%d ",b);
    }
    
    else if(c>d&&c>b&&c>a)
    {
        printf("%d ",c);
    }
    
    else
{
    printf("%d ",d);
}

}