/*Write a program to check if a number is a Armstrong number.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,temp,a=0,d,sum;
    printf("Enter your number. \n");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {   
        temp=temp/10;
        a++;
    }
    temp=n;
    while (temp>0)
    {   
        d=d%10;
        sum+=pow(d,a)
        temp=temp/10;
    }
    if(n==sum)
        printf("Yes %d is an Armstrong number.",n);
    else    
        printf("NO %d is not an Armstrong number.",n);    
    return 0;
}