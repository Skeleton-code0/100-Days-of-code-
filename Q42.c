/*Write a program to check if a number is a perfect number .*/
#include <stdio.h>

int main()
{
    int n,sum,i;
    printf("Enter your number. \n");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            sum+=i;
    }
    if (sum==n)
        printf("Yes a Perfect Number");
    else    
        printf("No not a Perfect Number");    
    return 0;
}