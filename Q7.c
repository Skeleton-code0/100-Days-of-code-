// Swap two numbers without help of third .
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two elements:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("first = %d\n",a);
    printf("second = %d\n",b);
    
    printf("first = %d\n",b);
    printf("second = %d\n",a);
    return 0;
}