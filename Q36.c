/*Write a program to find GCD of 2 numbers .*/
#include <stdio.h>

int main()
{
    int a,b,i,G;
    printf("Enter your first number. \n");
    scanf("%d",&a);
    printf("Enter your second number. \n");
    scanf("%d",&b);
    for (i=1;i<a+b;i++)
    {
        if(a%i==0 && b%i==0)
            G=i;
    }
    Printf("HCF(GCD) of %d ,%d is = %d",a,b,G);
    return 0;
}