/*Write a program to find LCM of 2 numbers .*/
#include <stdio.h>

int main()
{
    int a,b,i,G,L;
    printf("Enter your first number. \n");
    scanf("%d",&a);
    printf("Enter your second number. \n");
    scanf("%d",&b);
    for (i=1;i<a+b;i++)
    {
        if(a%i==0 && b%i==0)
            G=i;
    }
    L=(a*b)/G;
    Printf("LCM of %d ,%d is = %d",a,b,L);
    return 0;
}