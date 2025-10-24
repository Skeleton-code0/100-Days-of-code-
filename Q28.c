/*Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main()
{
    int n,i,pro=1;
    printf("Enter your limit.\n")
    scanf("%d",&n);
    for (i=2;i<=n;i+=2)
        pro*=i;   
    printf("Product :%d ",pro);
    return 0;
}