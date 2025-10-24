// Calculate the area and the circumferance of a circle .
#include <stdio.h>

int main()
{
    int r,area,cir;
    printf("Enter radious of a circle:\n");
    scanf("%d",&r);
    area=3.14*r*r;
    cir=2*(3.14*r);
    printf("%d is area\n",area);
    printf("%d is circumferance",cir);
    return 0;
}