/*Write a program to check if a number is prime .*/
#include <stdio.h>

int main()
{
    int n,i,a=0;
    printf("Enter your number. \n");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
            a=1;
    }
    if(a==0)
        printf("%d, is Prime.",n);
    else
        printf("%d, is not Prime.",n)    
    return 0;
}