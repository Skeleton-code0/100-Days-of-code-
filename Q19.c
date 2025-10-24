// Clasify triangles from 3 sides
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter your first side of the triangle.\n");
    scanf("%d",&a);
    printf("Enter your second side of the triangle.\n");
    scanf("%d",&b);
    printf("Enter your third side of the triangle.\n");
    scanf("%d",&c);
    if (a==b && b==c)
        printf("Equilateral triangle");
    else if (a==b || b==c || c==a)    
        printf("Isoselese triangle");
    else if (a+b >c && b+c>a && c+a>b)
        printf("Scalene Triangle");    
    return 0;
}    