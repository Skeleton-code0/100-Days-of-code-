/*Write a program to calculate the factorial of a number.*/
#include <stdio.h>

int main()
{
    int n,i,factorial=1;
    printf("Enter your number.\n")
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        factorial*=i;   
    printf("Factorial : %d ",factorial);
    return 0;
}