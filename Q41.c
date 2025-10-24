/*Write a program swap first and last digits of a number  .*/
#include <stdio.h>

int main()
{
    int n,temp,a,l,f,swap;
    printf("Enter your number. \n");
    scanf("%d",&n);
    while (temp>0)
    {
        a++;
        temp=temp/10;
    }
    temp=n;
    l=temp%10;
    temp=temp/10;
    f=temp/(10*(a-1));
    temp=temp%(10*(a-2));
    swap=l*10*a+temp*10+f;
    prntf("Original : %d",n);
    prntf("Swapped : %d",swap);
    return 0;
}