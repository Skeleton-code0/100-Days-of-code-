/*Write a program to check if a number is a palindrom.*/
#include <stdio.h>

int main()
{
    int n,temp,d,r;
    printf("Enter your number. \n");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {
        d=temp%10;
        r=r*10+d;
        temp=temp/10;
    }
    if(n==r)
        printf("Yes a Palindrom number.");
    else    
        printf("NO not a Palindrom number.");    
    return 0;
}