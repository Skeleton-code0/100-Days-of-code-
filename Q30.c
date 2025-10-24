/*Write a program to reverse a given number. */
#include <stdio.h>

int main()
{
    int n,i,r,d;
    printf("Enter your number for reversing.\n")
    scanf("%d",&n);
    while (n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }   
    printf("Reverse of number : %d ",r);
    return 0;
}