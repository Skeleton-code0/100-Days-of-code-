/*Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter your limit.\n")
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum+=i;   
    printf("Sum :%d ",sum);
    return 0;
}