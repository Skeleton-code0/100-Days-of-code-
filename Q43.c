/*Write a program to check a strong number.*/
#include <stdio.h>

int main()
{
    int n,temp,i,fac,sum,d;
    printf("Enter your number : \n");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        fac=1;
        d=temp%10;
        for (i=1;i<d;i++)
        {
            fac*=i;
        }
        temp=temp/10;
        sum+=fac
    }
    if(sum==n)
        printf("Yes a strong number.");
    else    
        printf("No not a strong number")    
    return 0;
}