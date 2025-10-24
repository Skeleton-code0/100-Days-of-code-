// find the biggest of 3 numbers.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter your first number");
    scanf("%d",&a);
    printf("Enter your second number");
    scanf("%d",&b);
    printf("Enter your third number");
    scanf("%d",&c);
    printf("Greatest number : ");
    if (a>b)
        if (a>c)
            printf("a = %d",a);
        else
            printf("c = %d",c);
    else
        if (b>c)
            printf("b = %d",b);
        else
            printf("c = %d",c);        
    return 0;
}    