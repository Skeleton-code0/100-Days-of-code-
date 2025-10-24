/*Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>

int main()
{
    int n;
    long bin=1;
    printf("Enter your number for binary conversion.\n")
    scanf("%d",&n);
    while (n>=1)
    {
        if(n%2==0)
        {
            n=n/2;
            bin = bin*10;
        }
        else
        {
            n=(n-1)/2;
            bin = bin*10+1;
        }
    }   
    printf("Binary conversion of number : %ld ",bin);
    return 0;
}