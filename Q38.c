/*Write a program to calculate sum of digits  .*/
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
        sum+=d;
        temp=temp/10;
    }
    prntf("Sum of digits : %d",sum);
    return 0;
}