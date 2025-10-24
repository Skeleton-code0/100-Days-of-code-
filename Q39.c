/*Write a program to calculate sum of odd digits of a number .*/
#include <stdio.h>

int main()
{
    int n,temp,d,sum;
    printf("Enter your number. \n");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {
        d=temp%10;
        if (d%2!=0)
            sum+=d;
        temp=temp/10;
    }
    prntf("Sum of odd digits : %d",sum);
    return 0;
}