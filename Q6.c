// Swap two numbers with help of third .
#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two elements:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("first = \n",a);
    printf("second = \n",b);
    temp=a;
    a=b;
    b=temp;
    printf("first = \n",a);
    printf("second = \n",b);
    return 0;
}