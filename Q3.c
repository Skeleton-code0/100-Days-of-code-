// Calculate the area and the perimeter of a rectangle .
#include <stdio.h>

int main()
{
    int l,b,area,peri;
    printf("Enter length and breath of a rectangle:\n");
    scanf("%d",&l);
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    printf("%d is area\n",area);
    printf("%d is perimeter",peri);
    return 0;
}